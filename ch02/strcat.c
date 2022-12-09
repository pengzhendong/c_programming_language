#include <stdio.h>
#include <stdlib.h>

void my_strcat(char s[], char t[]) {
  int i = 0;
  int j = 0;
  while (s[i] != '\0') i++;
  while ((s[i++] = t[j++]) != '\0')
    ;
}

int main() {
  int size = 1024;
  char* s = (char*)malloc(size * 2);
  char* t = (char*)malloc(size);

  printf("Please input the first string: ");
  gets(s);
  printf("Please input the second string: ");
  gets(t);
  my_strcat(s, t);
  printf("%s\n", s);

  free(s);
  free(t);
}