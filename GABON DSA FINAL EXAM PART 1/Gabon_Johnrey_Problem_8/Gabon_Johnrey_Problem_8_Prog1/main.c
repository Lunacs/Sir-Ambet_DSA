#include <stdio.h>
#include <string.h>

#define MAX_PARTS 50

typedef enum {
    CPU,
    GPU,
    RAM,
    STORAGE,
    MOTHERBOARD
} Category;

struct Part {
    char name[50];
    Category category;
    float price;
    int quantity;
};

struct Shop {
    struct Part inventory[MAX_PARTS];
    int partCount;
};

void addPart(struct Shop *shop) {
    if(shop->partCount >= MAX_PARTS) {
        printf("Inventory full!\n");
        return;
    }

    struct Part newPart;
    printf("Enter part name: ");
    scanf(" %[^\n]s", newPart.name);
    
    printf("Select category (0-CPU, 1-GPU, 2-RAM, 3-Storage, 4-Motherboard): ");
    scanf("%d", (int*)&newPart.category);
    
    printf("Enter price: $");
    scanf("%f", &newPart.price);
    
    printf("Enter quantity: ");
    scanf("%d", &newPart.quantity);
    
    shop->inventory[shop->partCount] = newPart;
    shop->partCount++;
    printf("Part added successfully!\n");
}

void displayInventory(struct Shop *shop) {
    char *categories[] = {"CPU", "GPU", "RAM", "Storage", "Motherboard"};
    
    printf("\nCurrent Inventory:\n");
    printf("Name\t\t\tCategory\tPrice\t\tQuantity\n");
    printf("--------------------------------------------------------\n");
    
    for(int i = 0; i < shop->partCount; i++) {
        printf("%-20s\t%-10s\t$%-10.2f\t%d\n",
            shop->inventory[i].name,
            categories[shop->inventory[i].category],
            shop->inventory[i].price,
            shop->inventory[i].quantity);
    }
}

void updateStock(struct Shop *shop) {
    char searchName[50];
    printf("Enter part name: ");
    scanf(" %[^\n]s", searchName);
    
    for(int i = 0; i < shop->partCount; i++) {
        if(strcmp(shop->inventory[i].name, searchName) == 0) {
            printf("Enter new quantity: ");
            scanf("%d", &shop->inventory[i].quantity);
            printf("Stock updated successfully!\n");
            return;
        }
    }
    printf("Part not found!\n");
}

int main() {
    struct Shop shop = {.partCount = 0};
    int choice;

    do {
        printf("\nComputer Parts Shop Management\n");
        printf("1. Add New Part\n");
        printf("2. Display Inventory\n");
        printf("3. Update Stock\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addPart(&shop); break;
            case 2: displayInventory(&shop); break;
            case 3: updateStock(&shop); break;
            case 0: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 0);

    return 0;
}
