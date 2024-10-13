#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int lim);

int main() {
  int max = 0;
  int len;
  char line[MAXLINE];

  printf("lines with more than 80 characters: \n");

  while ((len = getLine(line, MAXLINE)) > 0)
    if (len > 80) {
      printf("%s", line);
    }

  return 0;
}

int getLine(char s[], int lim) {
  int c;
  int i = 0;

  for (; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}
