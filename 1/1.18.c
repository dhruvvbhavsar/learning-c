#include <stdio.h>
#define MAXLINE 1000

int getLine(char s[], int lim);
void cleanline(char s[], int lim);

int main() {
  int len;
  char line[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0) {
    cleanline(line, MAXLINE);
    printf("%s\n", line);
  }
  return 0;
}

int getLine(char s[], int lim) {
  int c;
  int i = 0;

  for (; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    if (c != '\t') {
      s[i] = c;
    } else {
      --i;
    }
  }

  s[i] = '\0';
  return i;
}

void cleanline(char s[], int lim) {
  while (lim > 0 && (s[lim - 1] == ' ' || s[lim - 1] == '\t'))
    s[--lim] = '\0';
}
