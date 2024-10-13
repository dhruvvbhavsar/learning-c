#include <stdio.h>

#define MAXLINES 1000

void reverse(char s[]);
int getLine(char s[], int lim);

int main() {
  int len;
  char line[MAXLINES];

  while ((len = getLine(line, MAXLINES)) > 0) {
    reverse(line);
    printf("%s", line);
  }
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

void reverse(char s[]) {
    int len = 0;

    while (s[len] != '\0')
        len++;

    int i = 0, j = len - 1;
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}
