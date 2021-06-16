#include <stdio.h>

void main()
{
    int n,t1=1, t2=1, nextTerm=t1+t2;
    printf("Number of terms: ");
    scanf("%d", &n);
    printf("%d\n", t1);
    printf("%d\n", t2);
    for(int i = 1; i<=n; i++)
    {
        printf("%d\n", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1+t2;
    }
}
