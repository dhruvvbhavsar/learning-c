/* a program to count words, characters and new lines  */

#include <complex.h>
#include <stdio.h>

#define IN 1
#define OUT 0

main() {
  int c;

  int nl, nc, nw;
  nl = nc = nw = 0;

  int state = OUT;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') {
        ++nl;
    }

    if (c == ' ' || c == '\n' || c == '\t') {
      ++nw;
      state = IN;
    }
    else if (state == OUT) {
        state = IN;
        ++nw;
    }
  }

  printf("%d %d %d\n", nc, nw, nl);

}
