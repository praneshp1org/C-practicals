#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, sum=0;
    printf("Number: ");
    scanf("%d", &num);

    for(int i = 1; i<=num; i++)
    {
        sum = sum+i;
    }
    printf("The sum from 1 to %d is %d", num, sum);

}
