#include <stdio.h>
#include <conio.h>

void main()
{
    // sum();
    // ASCII();
    //areaOfTriangle();
    // interChangeVariable();
    F2C();
}
void sum()
{
    float num1, num2;

    printf("First Number: ");
    scanf("%f", &num1);

    printf("Second Number: ");
    scanf(" %f", &num2);


    printf(" Sum: %f", num1+num2);
}
void areaOfTriangle()
{
    int a, b, c;
    double s, A;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf(" %d", &b);
    printf("Enterca: ");
    scanf(" %d", &c);
    s = (a+b+c)/2;
    A = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area: %lf", A);
}
void interChangeVariable()
{
    int x, y, temp;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf(" %d", &y);

    temp = x;
    x = y;
    y = temp;
    printf("After swapping: x = %d & y = %d", x, y);


}
void F2C()
{
  double celsius, fahrenheit;
  printf("Temperature in F: ");
  scanf("%f", &fahrenheit);
  celsius = (fahrenheit - 32) * (5 / 9);

  printf("In Celsius: %.2lf", celsius);

}
void ASCII()
{
    char c;
    printf("Character: ");
    scanf("%c", &c);
    printf("\n");
    printf("The corresponding ASCII: %d", c);
}
