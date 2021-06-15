#include <stdio.h>
#include <stdlib.h>

void main()
{
    negativeNumber();
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
