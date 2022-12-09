#include <stdio.h>

#define MAXLINE 1000

int my_getline(char s[], int lim);
int strindex(char s[], char t[]);

char pattern[] = "ould";

int main(int argc, char* argv[]) {
  char line[MAXLINE];
  int found = 0;

  while (my_getline(line, MAXLINE) > 0) {
    if (strindex(line, pattern) >= 0) {
      printf("%s", line);
      found++;
    }
  }
  return found;
}