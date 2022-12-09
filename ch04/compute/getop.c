#include <ctype.h>
#include <stdio.h>

#define NUMBER '0'
#define BUFFSIZE 100

char buf[BUFFSIZE];
int bufp = 0;

int getch(void) { return bufp > 0 ? buf[--bufp] : getchar(); }

void ungetch(int c) {
  if (bufp >= BUFFSIZE) {
    printf("ungetch: too many characters\n");
  } else {
    buf[bufp++] = c;
  }
}

int getop(char s[]) {
  while ((s[0] = getch()) == ' ' || s[0] == '\t')
    ;
  if (!isdigit(s[0]) && s[0] != '.') {
    s[1] = '\0';
    return s[0];
  }

  int i = 0;
  while (isdigit(s[++i] = getch()))
    ;
  if (s[i] != EOF) {
    ungetch(s[i]);
  }
  s[i] = '\0';
  return NUMBER;
}
