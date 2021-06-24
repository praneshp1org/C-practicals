#include <stdio.h>
#include <stdbool.h>

void main()
{
    //primeChecker();
    //GCDLCM();
    palindromeChecker();
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
void GCDLCM()
{
    int num1, num2, product, lcm;
    printf("Numbers: ");
    scanf("%d %d", &num1, &num2);
    product = num1*num2;
    while(num1!=num2)
    {
        if(num1>num2)
        {
            num1-=num2;

        }else
        {
            num2-=num1;
        }
    }
    lcm = product/num1;
    printf("GCD is %d and LCM is %d", num1, lcm);
}
void palindromeChecker()
{
    int num, rev=0, n, digit;
    printf("Number: ");
    scanf("%d", &num);
    n = num;
    do
    {
        digit = num%10;
        rev=rev*10+digit;
        num/=10;
    }while(num!=0);
    if(n==rev)
    {
        printf("Palindrome!");

    }else
    {
        printf("NOT PALINDROME!");
    }
}
