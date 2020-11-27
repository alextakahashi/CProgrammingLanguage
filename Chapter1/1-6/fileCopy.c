#include <stdio.h>

/**
 * Printing each character of the input
 * */

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        printf("\n");
    }
    return 0;
}
