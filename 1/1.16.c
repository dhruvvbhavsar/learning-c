#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int lim);
void copy(char to[], char from[]);

int main() {
    int len;
    int max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("Longest line length: %d\n", max);
        printf("Longest line (up to %d characters): %s", MAXLINE - 1, longest);
        if (max >= MAXLINE) {
            printf("...\n");
        }
    }

    return 0;
}

int getLine(char s[], int lim) {
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 1) {
            s[i] = c;
        }
    }
    if (c == '\n') {
        if (i < lim - 1) {
            s[i] = c;
        }
        ++i;
    }
    s[i < lim - 1 ? i : lim - 1] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0' && i < MAXLINE - 1) {
        ++i;
    }
    to[MAXLINE - 1] = '\0';  // Ensure null-termination
}
