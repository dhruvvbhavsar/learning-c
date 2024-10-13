#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int lim);
void copy(char to[], char from[]);

int main() {
  int max = 0;
  int len;
  char line[MAXLINE];
  char longest[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }

  if (max > 0)
    printf("longest line: %s", longest);

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

void copy(char to[], char from[]) {
  int i = 0;

  while ((to[i] = from[i]) != '\0')
    ++i;
}
