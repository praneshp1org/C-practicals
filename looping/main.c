#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(int i = 65; i<=122; i++)
    {
        if(i>=91 && i<=96)
        {
            continue;
        }
        printf("\n%c = %d",i,i);
    }
    return 0;
}
