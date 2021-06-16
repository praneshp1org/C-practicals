#include <stdio.h>

void main()
{
    int num, binary[32], rem, i=0;
    printf("Decimal Number: ");
    scanf("%d", &num);
    while(num>0)
    {
        binary[i] = num%2; //Storing in an array
        num = num/2;
        i++;

    }
    for(int j = i-1; j>=0; j--)
    {
        printf("%d", binary[j]); //reversing an array
    }
}
