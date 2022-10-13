#include <stdio.h>

int my_getline(char s[], int lim) {
  int i = 0;
  char c;
  while (--lim > 0 && (c = getchar()) != EOF) {
    s[i++] = c;
    if (c == '\n') {
      break;
    }
  }
  s[i] = '\0';
  return i;
}
