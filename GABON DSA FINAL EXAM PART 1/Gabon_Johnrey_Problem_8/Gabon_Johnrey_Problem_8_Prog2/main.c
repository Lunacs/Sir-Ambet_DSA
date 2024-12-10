#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 50
typedef enum {
    RAMEN,
    UDON,
    RICE_MEAL
} DishType;
typedef enum {
    MILD,
    MEDIUM,
    SPICY,
    EXTRA_SPICY
} SpiceLevel;
struct MenuItem {
    char name[50];
    DishType type;
    float price;
    SpiceLevel spice;
    int ordersCount;
};
struct NoodleShop {
    struct MenuItem menu[MAX_ITEMS];
    int itemCount;
    float totalSales;
};
void addMenuItem(struct NoodleShop *shop) {
    if(shop->itemCount >= MAX_ITEMS) {
        printf("Menu is full!\n");
        return;
    }
    struct MenuItem newItem;
    printf("\nAdd New Menu Item\n");
    printf("Enter dish name: ");
    scanf(" %[^\n]s", newItem.name);
    printf("Select type (0-Ramen, 1-Udon, 2-Rice Meal): ");
    scanf("%d", (int*)&newItem.type);

    printf("Enter price: P");
    scanf("%f", &newItem.price);

    printf("Select spice level (0-Mild, 1-Medium, 2-Spicy, 3-Extra Spicy): ");
    scanf("%d", (int*)&newItem.spice);

    newItem.ordersCount = 0;

    shop->menu[shop->itemCount] = newItem;
    shop->itemCount++;
    printf("Menu item added successfully!\n");
}

void displayMenu(struct NoodleShop *shop) {
    char *types[] = {"Ramen", "Udon", "Rice Meal"};
    char *spiceLevels[] = {"Mild", "Medium", "Spicy", "Extra Spicy"};

    printf("\n===== ELLY'S MAMIHAN MENU =====\n");
    printf("Name\t\t\tType\t\tSpice Level\tPrice\n");
    printf("--------------------------------------------------------\n");
    for(int i = 0; i < shop->itemCount; i++) {
        printf("%-20s\t%-10s\t%-10s\tP%.2f\n",
            shop->menu[i].name,
            types[shop->menu[i].type],
            spiceLevels[shop->menu[i].spice],
            shop->menu[i].price);
    }
}
void placeOrder(struct NoodleShop *shop) {
    char dishName[50];
    printf("Enter dish name: ");
    scanf(" %[^\n]s", dishName);

    for(int i = 0; i < shop->itemCount; i++) {
        if(strcmp(shop->menu[i].name, dishName) == 0) {
            shop->menu[i].ordersCount++;
            shop->totalSales += shop->menu[i].price;
            printf("Order placed successfully!\n");
            printf("Total sales: P%.2f\n", shop->totalSales);
            return;
        }
    }
    printf("Dish not found!\n");
}
int main() {
    struct NoodleShop shop = {.itemCount = 0, .totalSales = 0};
    int choice;
    do {
        printf("\n===== ELLY'S MAMIHAN Program =====\n");
        printf("1. Add Menu Item\n");
        printf("2. Display Menu\n");
        printf("3. Place Order\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");
        switch(choice) {
            case 1: addMenuItem(&shop); break;
            case 2: displayMenu(&shop); break;
            case 3: placeOrder(&shop); break;
            case 0: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 0);
    return 0;
}
