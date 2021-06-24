#include <stdio.h>
#include <stdbool.h>

void main()
{
    primeChecker();
}
void primeChecker()
{
    bool isPrime = true;
    int num, divisor;
    printf("Number: ");
    scanf("%d", &num);
    for(int i =2; i<num; i++)
    {
        if(num%i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if(!isPrime)
    {
        printf("NOT PRIME!");
    }else
    {
        printf("PRIME");
    }
}
