#include <stdio.h>
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;       // Get the last digit
        reversed = reversed * 10 + digit;  // Add digit to reversed number
        num /= 10;                  // Remove the last digit
    }
    return reversed;
}

int main() {
    int number, result;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    result = reverseNumber(number);
    
    printf("The reverse of %d is %d\n", number, result);
    
    return 0;
}
