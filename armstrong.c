#include <stdio.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, result = 0;
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num)
        return 1; // Armstrong number
    else
        return 0; // Not an Armstrong number
}

int main() {
    int i;
    printf("Armstrong numbers from 1 to 100 are:\n");

    for (i = 1; i <= 100; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }

    return 0;
}
