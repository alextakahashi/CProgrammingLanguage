#include <stdio.h>

/**
 * Counting the number of blanks, tabs, and new line characters
 * */

int main()
{
    int blankCounter = 0;
    int tabCounter = 0;
    int newLineCounter = 0;
    int c;
    while ((c = getchar()) != EOF) 
    {
        if (c == ' ') {
            blankCounter += 1;
        } else if (c == '\t') {
            tabCounter += 1;
        } else if (c == '\n') {
            newLineCounter += 1;
        }
    }
    printf("Count Blanks: %d\n", blankCounter);
    printf("Count Tabs: %d\n", tabCounter);
    printf("Count New Lines: %d\n", newLineCounter);
    return 0;
}
