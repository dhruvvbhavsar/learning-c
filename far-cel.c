#include <stdio.h>

main()
{
    float far,cel;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("---Farenheit to Celcius converter---\n");

    while (lower <= upper) {
        far = lower;
        cel = (5.0 * (far - 32.0) / 9.0);
        printf("| %3.0f\t|%6.1f |\n", far, cel);
        lower = lower + step;
    }
}
