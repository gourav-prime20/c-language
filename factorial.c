#include <stdio.h>

int Factorial(int n){
    if(n == 0)
        return 1;
    return Factorial(n-1) * n;
}

int main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    printf("Factorial :- %d", Factorial(n));
    
    printf("\n");
    return 0; 
}