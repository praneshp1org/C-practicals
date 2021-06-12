#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    //area();
    //largeNumber();
    //sizes();
    withSpaces();
    return 0;
}
void area()
{
    float r1, r2, A1, A2;
    printf("Enter r1 and r2: ");
    scanf("%f %f", &r1, &r2);
    A1 = PI*(r1*r1);
    A2 = PI*(r2*r2);

    printf("\nA1: %0.2f and A2: %0.2f", A1, A2);
}
void largeNumber()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        printf("%d is greater than %d", a, b);
    }else
    {
        if(a==b)
        {
            printf("Both are equal!");
        }else
        {
            printf("%d is larger than %d", b, a);
        }
    }

}
void sizes()
{
    int a;
    float b;
    double c;
    char d;
    printf("Size of int is %d bytes.\n", sizeof(a));
    printf("Size of float is %d bytes.\n", sizeof(b));
    printf("Size of double is %d bytes.\n", sizeof(c));
    printf("Size of char is %d bytes.\n", sizeof(d));
}
void withSpaces()
{
    char name[20];
    printf("Name: ");
    scanf("%[^\n]s", name);
    printf("%s", name);
}
