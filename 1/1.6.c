#include <stdio.h>

main() {
  int c, nWhite, nOther;
  int nDigit[10];

  nWhite = nOther = 0;

  for (int i = 0; i < 10; i++)
    nDigit[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      ++nDigit[c - '0'];

    else if (c == ' ' || c == '\n' || c == '\t')
      ++nWhite;
    else
      ++nOther;
  }

  printf("\ndigits = ");
  for (int j = 0; j < 10; j++)
    printf(" %d", nDigit[j]);

  printf("\nWhite Spaces: %d", nWhite);
  printf("\nOther Characters: %d\n", nOther);
}
