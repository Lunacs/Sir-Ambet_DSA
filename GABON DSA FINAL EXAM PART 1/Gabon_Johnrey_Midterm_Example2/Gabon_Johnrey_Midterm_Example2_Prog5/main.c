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
    A[0] = (House){1, 1, "House 1", 1234567890};
    A[1] = (House){2, 3, "House 2", 9876543210};
    A[2] = (House){3, 2, "House 3", 1122334455};
    A[3] = (House){4, 5, "House 4", 9988776655};
    printf("Small houses (less than or equal to 2 rooms):\n");
    for (int i = 0; i < 4; i++) {
        if (A[i].NumberOfRooms <= 2) {
            printf("House ID %d: %d rooms\n", A[i].id, A[i].NumberOfRooms);
        }
    }
    return 0;
}
