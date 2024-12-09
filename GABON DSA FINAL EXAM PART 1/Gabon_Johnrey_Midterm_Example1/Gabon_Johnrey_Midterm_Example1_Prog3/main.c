#include <stdio.h>
#include <string.h>

struct House {
    int id;
    int NumberOfRooms;
    char address[50];
    int OwnerPhone;
};

int main() {
    struct House A[100]; // Array of 100 houses
    printf("Struct House created sucessfully\n");
    return 0;
}
