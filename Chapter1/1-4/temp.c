#include <stdio.h>

/**
 * Converting from Celsius to Fahrenheit
 * */

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    celsius = lower;
    printf("%5s %6s\n", "°C", "°F");
    while (celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%3.0f%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
