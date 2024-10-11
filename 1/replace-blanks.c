#include <stdio.h>

main() {
  int c, prev = '\0';

  while ((c = getchar()) != EOF) {
    /* 32 stands for a blank space */
    if (c != 32 || prev != 32) {
      putchar(c);
    }
    prev = c;
  }
}
