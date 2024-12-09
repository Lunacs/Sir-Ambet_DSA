#include <stdio.h>
#include <string.h>

struct House {
    int id;
    int NumberOfRooms;
    char address[100];
    int OwnerPhone;
};

int main() {
    struct House A[100];
    A[0].id = 0;
    A[0].NumberOfRooms = 5;
    strcpy(A[0].address, "Shubra Street on the front of the old hospital, Building 5, Floor 4");
    A[0].OwnerPhone = 555779922;

    // Print the details of the house
    printf("House ID: %d\n", A[0].id);
    printf("Number of Rooms: %d\n", A[0].NumberOfRooms);
    printf("Address: %s\n", A[0].address);
    printf("Owner Phone: %d\n", A[0].OwnerPhone);

    return 0;
}
