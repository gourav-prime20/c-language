#include <stdio.h>

int isPrime(int n)  {
    for(int x = 2; x< n; x++)
        if(n % x == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);

    if(isPrime(n))
        printf("%d is a Prime Number",n);
    else
        printf("%d is a not Prime Number",n);
    
    printf("\n");
    return 0; 

}