#include <stdio.h>

struct House {
    int id;
    int NumberOfRooms;
    char address[50];
    int OwnerPhone;
};

int main() {
    struct House A[100];

    // Initialize the NumberOfRooms for each house
    for (int i = 0; i < 100; i++) {
        A[i].NumberOfRooms = (i + 1) % 10;
    }

    // Display the number of rooms for houses with more than 5 rooms
    for (int i = 0; i < 100; i++) {
        if (A[i].NumberOfRooms > 5) {
            printf("%d\n", A[i].NumberOfRooms);
        }
    }

    return 0;
}
