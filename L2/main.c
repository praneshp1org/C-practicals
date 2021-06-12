#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#include <math.h>
int main()
{
    //area();
    //largeNumber();
    //sizes();
    //withSpaces();
    quadraticRoots();
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
void quadraticRoots()
{
    int a, b, c;
    float x1, x2, D, img1, img2;

    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    D = (b*b)-(4*a*c);
    if(D>0)
    {
        x1 = (-b+(sqrt(D)))/(2*a);
        x2 = (-b-(sqrt(D)))/(2*a);
        printf("x1: %.2f and x2: %.2f", x1, x2);
    }else
    {
        if(D==0)
        {
            x1 = x2 = -b/(2*a);
            printf("Both roots are equal and is %.2f", x1);
        }else
        {
            x1 = x2 = -b/(2*a);
            img1 = sqrt(-D);
            img2 = sqrt(-D);
            printf("x1: %.2f + %.2fi ", x1, img1);
            printf("x2: %.2f - %.2fi ", x1, img1);
        }
    }

}
