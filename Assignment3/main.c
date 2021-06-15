#include <stdio.h>
#include <stdlib.h>

void main()
{
    //negativeNumber();
    //largestNumber();
    secondLargest();
}
void negativeNumber()
{

    int num;
    printf("Number: ");
    scanf("%d", &num);
    if(num<0)
    {
        printf("NEGATIVE NUMBER!");
    }
}
void largestNumber()
{
    int num1, num2, num3;
    printf("Three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("%d is largest. ", num1);
        }else
        {
            printf("%d is largest. ", num3);
        }
    }else
    {
        if(num2>num3)
        {
            printf("%d is largest.", num2);
        }else
        {
            printf("%d is largest", num3);
        }
    }
}
void secondLargest()
{
    int num1, num2, num3;
    printf("Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1>num2)
    {
        if(num1<num3)
        {
            printf("%d is second largest.", num1);
        }else
        {
            printf("%d is second largest", num3);
        }
    }else
    {
        if(num2<num3)
        {
            printf("%d is second largest", num2);
        }else
        {
            printf("%d is second largest", num3);
        }
    }
}
