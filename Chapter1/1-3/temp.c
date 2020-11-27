#include <stdio.h>

/**
 * Attempted to Right Justify the Headers using String Formatting 
 * See https://www.dummies.com/programming/c/how-to-format-with-printf-in-c-programming/
 * */

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    printf("%5s %6s\n", "°F", "°C");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
