/* A program to calculate frequencies of characters and draw a vertical histogram */

#include <stdio.h>

#define CHAR 26

main() {
  int c;
  int lWords[CHAR];

  for (int i = 0; i < CHAR; i++)
    lWords[i] = 0;

  int count = 0;
  printf("text:\n");
  while ((c = getchar()) != EOF) {

    if (c >= 'A' && c <= 'Z') {
      int num = c - 'A';
      ++lWords[num];
    } else if (c >= 'a' && c <= 'z') {
      int num = c - 'a';
      ++lWords[num];
    }
    putchar(c);
  }

  printf("digits: ");
  for (int j = 0; j < CHAR; j++)
    printf(" %d", lWords[j]);

  printf("\n");

  printf("    ^\n");

  int max = CHAR;

  for (int i = 0; i < CHAR; i++)
    if (lWords[i] > max)
      max = lWords[i];

  for (int i = max; i > 0; --i) {
    printf("%3d +", i);

    for (int p = 0; p < CHAR; p++) {
      if (lWords[p] >= i) {
        printf("  o");
      } else {
        printf("   ");
      }
    }

    printf("\n");
  }

  printf("    ");

  for (int i = 0; i <= CHAR; i++) {
    printf("+  ");
  }

  printf(">\n");

  printf("   ");

  for (int i = 0; i <= CHAR; i++) {
    printf("%2d ", i);
  }

  printf("\n");
}
