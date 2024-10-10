/* A C program to count blanks, tabs and new lines from input text */

#include <stdio.h>

int main() {
  int b = 0, t = 0, n = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == 10)
      ++n;
    else if (c == 9)
      ++t;
    else if (c == 32)
      ++b;
  }

  printf("Blanks: %d\nTabs: %d\nNew Lines: %d\n", b, t, n);
}
