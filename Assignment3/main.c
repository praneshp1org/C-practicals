#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void main()
{
    //primeChecker();
    //GCDLCM();
    //palindromeChecker();
    //decimal2Binary();
    //Armstrong();
    //Strong();
    primeRange();
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
void decimal2Binary()
{
    int decimal, placeValue=1, binary=0, rem;
    printf("Number: ");
    scanf("%d", &decimal);
    do
    {
        rem = decimal%2;
        binary+=rem*placeValue;
        decimal/=2;
        placeValue*=10;
    }while(decimal!=0);
    printf("Binary: %d", binary);
}
void Armstrong()
{
    int n1, n2, rem, res=0, n;
    printf("n1 and n2: ");
    scanf("%d %d", &n1, &n2);
    for(int i = n1; i<=n2; i++)
    {
        n=i;
        while(i!=0)
        {
            rem = i%10;
            res+=pow(rem, 3);
            i/=10;
        }
        if(res==n)
        {
            printf("%d\n", n);
        }
    }

}
void Strong()
{
    int num, rem, digits,n, sum=0, f=1;
    printf("Number: ");
    scanf("%d", &num);
    n=num;
    while(num!=0)
    {
        rem = num%10;
        for(int i =1; i<=rem; i++)
        {
          f*=i;
        }
        sum+=f;
        num/=10;
    }
    if(n==sum)
    {
        printf("Strong!");
    }
    else
    {
        printf("NOT!");
    }
}
void primeRange()
{
    int r1, r2, i, j;
    printf("Range: ");
    scanf("%d %d",&r1, &r2);
    for(i=r1; i<=r2; i++)
    {
        for(j=2; i<i; j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d\n", i);
        }
    }
}
