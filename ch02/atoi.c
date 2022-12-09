#include <stdio.h>
#include <stdlib.h>

int my_atoi(char s[]) {
  int n = 0;
  for (int i = 0; s[i] >= '0' && s[i] <= '9'; i++) {
    n = 10 * n + (s[i] - '0');
  }
  return n;
}

int main() {
  int size = 1024;
  char* buff = (char*)malloc(size);

  printf("Please input the number: ");
  gets(buff);
  int value = my_atoi(buff);
  printf("%d\n", value);

  free(buff);
}