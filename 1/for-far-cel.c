#include <stdio.h>

main()
{
    printf("---Farenheit to Celcius converter---\n");

    int farh;
    for(farh = 300; farh >= 0; farh = farh - 20)
        printf("| %3d\t|%6.1f |\n", farh, (5.0 * (farh - 32.0) / 9.0));
}
