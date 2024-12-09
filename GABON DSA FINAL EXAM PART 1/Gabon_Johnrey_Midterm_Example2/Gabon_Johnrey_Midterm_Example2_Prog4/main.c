#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    int NumberOfRooms;
    char address[50];
    int OwnerPhone;
} House;

int main() {
    House A[100];
    printf("Enter house ID: ");
    scanf("%d", &A[0].id);

    printf("Enter number of rooms: ");
    scanf("%d", &A[0].NumberOfRooms);

    printf("Enter address: ");
    getchar();
    fgets(A[0].address, 50, stdin);
    A[0].address[strcspn(A[0].address, "\n")] = '\0';

    printf("Enter owner phone: ");
    scanf("%d", &A[0].OwnerPhone);

    printf("\nHouse details:\n");
    printf("ID: %d\n", A[0].id);
    printf("Number of Rooms: %d\n", A[0].NumberOfRooms);
    printf("Address: %s\n", A[0].address);
    printf("Owner Phone: %d\n", A[0].OwnerPhone);

    return 0;
}
