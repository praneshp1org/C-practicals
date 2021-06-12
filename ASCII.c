#include <stdio.h>

void main()
{
    ASCII();
}
void ASCII()
{
    char c;
    printf("Character: ");
    scanf("%c", &c);
    printf("\n");
    printf("The corresponding ASCII: %d", c);
}
