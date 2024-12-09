#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ORDERS 100

typedef enum {
    PENDING,
    IN_PROCESS,
    READY,
    DELIVERED
} Status;

typedef enum {
    WASH = 1,
    DRY_CLEAN,
    IRON
} ServiceType;

struct Order {
    int id;
    char customerName[50];
    ServiceType service;
    float weight;
    float price;
    Status status;
    char dateReceived[20];
};

struct LaundryShop {
    struct Order orders[MAX_ORDERS];
    int orderCount;
    float rates[3];  // rates for wash, dry clean, iron
};

void initializeLaundryShop(struct LaundryShop *shop) {
    shop->orderCount = 0;
    shop->rates[0] = 5.0;  // wash rate per kg
    shop->rates[1] = 8.0;  // dry clean rate per kg
    shop->rates[2] = 3.0;  // iron rate per kg
}

void addOrder(struct LaundryShop *shop) {
    if(shop->orderCount >= MAX_ORDERS) {
        printf("Orders full!\n");
        return;
    }

    struct Order newOrder;
    newOrder.id = shop->orderCount + 1001;
    
    printf("Enter customer name: ");
    scanf(" %[^\n]s", newOrder.customerName);
    
    printf("Select service (1-Wash, 2-Dry Clean, 3-Iron): ");
    scanf("%d", (int*)&newOrder.service);
    
    printf("Enter weight in kg: ");
    scanf("%f", &newOrder.weight);
    
    printf("Enter date (DD/MM/YYYY): ");
    scanf(" %[^\n]s", newOrder.dateReceived);
    
    newOrder.price = shop->rates[newOrder.service - 1] * newOrder.weight;
    newOrder.status = PENDING;
    
    shop->orders[shop->orderCount] = newOrder;
    shop->orderCount++;
    
    printf("Order added! Total price: $%.2f\n", newOrder.price);
}

void displayOrders(struct LaundryShop *shop) {
    printf("\nCurrent Orders:\n");
    printf("ID\tCustomer\t\tService\t\tStatus\t\tPrice\n");
    for(int i = 0; i < shop->orderCount; i++) {
        char *service[] = {"Wash", "Dry Clean", "Iron"};
        char *status[] = {"Pending", "Processing", "Ready", "Delivered"};
        
        printf("%d\t%-20s\t%-10s\t%-10s\t$%.2f\n", 
            shop->orders[i].id,
            shop->orders[i].customerName,
            service[shop->orders[i].service - 1],
            status[shop->orders[i].status],
            shop->orders[i].price);
    }
}

void updateOrderStatus(struct LaundryShop *shop) {
    int id, newStatus;
    printf("Enter order ID: ");
    scanf("%d", &id);
    
    for(int i = 0; i < shop->orderCount; i++) {
        if(shop->orders[i].id == id) {
            printf("Enter new status (0-Pending, 1-Processing, 2-Ready, 3-Delivered): ");
            scanf("%d", &newStatus);
            shop->orders[i].status = newStatus;
            printf("Status updated successfully!\n");
            return;
        }
    }
    printf("Order not found!\n");
}

int main() {
    struct LaundryShop shop;
    initializeLaundryShop(&shop);
    int choice;

    do {
        printf("\nLaundry Shop Management System\n");
        printf("1. Add New Order\n");
        printf("2. Display Orders\n");
        printf("3. Update Order Status\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addOrder(&shop); break;
            case 2: displayOrders(&shop); break;
            case 3: updateOrderStatus(&shop); break;
            case 0: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 0);

    return 0;
}
