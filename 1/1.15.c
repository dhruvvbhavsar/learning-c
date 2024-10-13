#include <stdio.h>

float convert(int m);

int main() {
  printf("---Farenheit to Celcius converter---\n");

  int farh;
  for (farh = 300; farh >= 0; farh = farh - 20)
    printf("| %3d\t|%6.1f |\n", farh, convert(farh));

  return 0;
}

float convert(int far) {
  float result = (5.0 * (far - 32.0) / 9.00);
  return result;
}
