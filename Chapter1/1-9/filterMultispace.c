#include <stdio.h>
#include <stdbool.h>

/**
 * Filtering out multiple spaces from the input
 * */

int main()
{
    int c;
    bool shouldSkipSpace = true;
    while ((c = getchar()) != EOF) 
    {
        if (c != ' ') {
            putchar(c);
            shouldSkipSpace = false;
        } else {
            if (shouldSkipSpace) {
                // no-op    
            } else {
                putchar(' ');
                shouldSkipSpace = true;
            }
        }
    }
    return 0;
}
