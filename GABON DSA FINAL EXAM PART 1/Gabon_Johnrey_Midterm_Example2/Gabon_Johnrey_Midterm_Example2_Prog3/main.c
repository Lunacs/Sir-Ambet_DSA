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
    A[0].id = 1;
    A[0].NumberOfRooms = 3;
    strcpy(A[0].address, "123 Main St");
    A[0].OwnerPhone = 1234567890;

    printf("House ID: %d\n", A[0].id);
    printf("Number of Rooms: %d\n", A[0].NumberOfRooms);
    printf("Address: %s\n", A[0].address);
    printf("Owner Phone: %d\n", A[0].OwnerPhone);

    return 0;
}
