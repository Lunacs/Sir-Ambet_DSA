#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PRODUCTS 5

struct Product {
    char name[30];
    float price;
    int quantity;
};
struct Store {
    struct Product items[MAX_PRODUCTS];
    int count;
};
// initialized features methods
void addProduct(struct Store *store);
void showProducts(struct Store *store);
void updateStock(struct Store *store);
float calculateTotalValue(struct Store *store);

int main() {
    struct Store store = {.count = 0};
    int choice;
    printf("=====Store Management Program=====");

    do {
        printf("\n1. Add Product\n");
        printf("2. Show Products\n");
        printf("3. Update Stock\n");
        printf("4. Calculate Total Value\n");
        printf("0. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch(choice) {
            case 1: addProduct(&store); break;
            case 2: showProducts(&store); break;
            case 3: updateStock(&store); break;
            case 4: printf("Total inventory value: $%.2f\n",
                          calculateTotalValue(&store)); break;
            case 0: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 0);

    return 0;
}
void addProduct(struct Store *store) {
    if(store->count >= MAX_PRODUCTS) {
        printf("Store is full!\n");
        return;
    }

    printf("Enter product name: ");
    scanf(" %[^\n]s", store->items[store->count].name);
    printf("Enter price: ");
    scanf("%f", &store->items[store->count].price);
    printf("Enter quantity: ");
    scanf("%d", &store->items[store->count].quantity);

    store->count++;
}
void showProducts(struct Store *store) {
    printf("\nProduct List:\n");
    printf("Name\t\tPrice\tQuantity\n");
    for(int i = 0; i < store->count; i++) {
        printf("%-15sP%.2f\t%d\n",
            store->items[i].name,
            store->items[i].price,
            store->items[i].quantity);
    }
}
void updateStock(struct Store *store) {
    char searchName[30];
    int newQuantity;

    printf("Enter product name: ");
    scanf(" %[^\n]s", searchName);

    for(int i = 0; i < store->count; i++) {
        if(strcmp(store->items[i].name, searchName) == 0) {
            printf("Enter new quantity: ");
            scanf("%d", &newQuantity);
            store->items[i].quantity = newQuantity;
            printf("Stock updated successfully!\n");
            return;
        }
    }
    printf("Product not found!\n");
}
float calculateTotalValue(struct Store *store) {
    float total = 0;
    for(int i = 0; i < store->count; i++) {
        total += store->items[i].price * store->items[i].quantity;
    }
    return total;
}
