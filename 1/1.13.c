/* A program to calculate word lengths and draw a vertical histogram */

#include <stdio.h>

main() {
  int c;
  int nw;
  int lWords[15];
  int state;

  nw = 0;
  for (int i = 0; i < 15; i++)
    lWords[i] = 0;

  int count = 0;
  printf("text:\n");
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      ++nw;
      ++lWords[count - 1];
      count = 0;
    } else {
      ++count;
    }
    putchar(c);
  }

  printf("\nNumber of words: %d\n", ++nw);
  printf("digits: ");
  for (int j = 0; j < 15; j++)
    printf(" %d", lWords[j]);

  printf("\n");

  printf("    ^\n");

  int max = 15;

  for (int i = 0; i < 15; i++)
    if (lWords[i] > max)
      max = lWords[i];

  for (int i = max; i > 0; --i) {
    printf("%3d +", i);

    for (int p = 0; p < 15; p++) {
      if (lWords[p] >= i) {
        printf("  o");
      } else {
        printf("   ");
      }
    }

    printf("\n");
  }

  printf("    ");

  for (int i = 0; i <= 15; i++) {
    printf("+  ");
  }

  printf(">\n");

  printf("   ");

  for (int i = 0; i <= 15; i++) {
    printf("%2d ", i);
  }

  printf("\n");
}
