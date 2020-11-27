#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/**
 * Using a For Loop instead of a while loop.  Using a define statement for Symbolic Constants.
 * */

int main()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) 
    {
        printf("%3d%6.1f\n", fahr, (5.0 /9.0) * (fahr - 32));    
    }
    return 0;
}
