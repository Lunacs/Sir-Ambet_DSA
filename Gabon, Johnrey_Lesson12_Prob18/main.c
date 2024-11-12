#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50], date[12];
    double price1, price2, price3;
    int qty1, qty2, qty3;

    // Input section with validation
    printf("Date of purchase (mm/dd/yyyy): ");
    scanf("%11s", date);  // Limit input length

    printf("Name of the buyer: ");
    getchar();  // Clear input buffer
    scanf("%49[^\n]", name);  // Limit input length

    // Cricket items input
    printf("\n--- Cricket Items ---\n");
    do {
        printf("Price of bats: ");
        scanf("%lf", &price1);
    } while (price1 <= 0);

    do {
        printf("Quantity: ");
        scanf("%d", &qty1);
    } while (qty1 <= 0);

    do {
        printf("\nPrice of wickets: ");
        scanf("%lf", &price2);
    } while (price2 <= 0);

    do {
        printf("Quantity: ");
        scanf("%d", &qty2);
    } while (qty2 <= 0);

    do {
        printf("\nPrice of balls: ");
        scanf("%lf", &price3);
    } while (price3 <= 0);

    do {
        printf("Quantity: ");
        scanf("%d", &qty3);
    } while (qty3 <= 0);

    // Calculations
    double amount1 = price1 * qty1;
    double amount2 = price2 * qty2;
    double amount3 = price3 * qty3;
    double totalAmount = amount1 + amount2 + amount3;

    // Tax calculation
    double taxRate = (totalAmount > 300000) ? 0.175 :
                    (totalAmount > 150000) ? 0.125 : 0.07;
    double totalTax = totalAmount * taxRate;
    double grandTotal = totalAmount + totalTax;

    // Bill display with proper alignment
    printf("\n========= CRICKET SUPPLIES BILL =========\n");
    printf("Date: %s\n", date);
    printf("Buyer: %s\n\n", name);
    // Header
    printf("%-8s %3s   %8s   %10s\n", "Item", "Qty", "Price", "Amount");
    printf("----------------------------------------\n");
    // Items with consistent width: 8 char item, 3 digit qty, 8.2 price, 10.2 amount
    printf("%-8s %3d x %8.2lf = %10.2lf\n", "Bats", qty1, price1, amount1);
    printf("%-8s %3d x %8.2lf = %10.2lf\n", "Wickets", qty2, price2, amount2);
    printf("%-8s %3d x %8.2lf = %10.2lf\n", "Balls", qty3, price3, amount3);

    printf("----------------------------------------\n");
    printf("%-20s %10.2lf\n", "Total Amount:", totalAmount);
    printf("%-20s %10.2lf\n", "Sales Tax:", totalTax);
    printf("%-20s %10.2lf\n", "Grand Total:", grandTotal);
    printf("----------------------------------------\n");

    return 0;
}
