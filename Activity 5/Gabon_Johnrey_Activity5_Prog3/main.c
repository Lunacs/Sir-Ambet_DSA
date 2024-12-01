#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rollDice(int dice[], int numRolls)
{
    for (int i = 0; i < numRolls; i++)
    {
        int roll = rand() % 6;
        dice[roll]++;
    }
}
void displayResults(int dice[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("Face %d: %d times\n", i + 1, dice[i]);
    }
}
int main()
{
    int dice[6] = {0, 0, 0, 0, 0, 0}; // Array to store the count of each face
    int numRolls, roll;
    // Seed the random number generator
    srand(time(NULL));
    printf("Enter the number of times to roll the dice: ");
    scanf("%d", &numRolls);

    rollDice(dice, numRolls);
    displayResults(dice);

    return 0;
}
