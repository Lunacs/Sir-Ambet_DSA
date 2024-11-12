#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n");

    int low = 2, high = num / 2;
    bool isFound = false;
    // Perform binary search to check if the number is a perfect square
    while(low <= high){
        int mid = low + (high - low) / 2;

        if(mid * mid == num) {
            isFound = true;
            // If mid*mid equals num, it is a perfect square
            printf("%d is a perfect square!\n", num);
            break;
        }
        else if(mid * mid > num) high = mid - 1;
        else low = mid + 1;
    }
    // If no perfect square is found, print the message
    if(!isFound) printf("%d is NOT a perfect square!\n", num);

    return 0;
}
