#include <stdio.h>

#include "align.h"

void my_free(void* ap);
void* my_malloc(unsigned nbytes);

int main(int argc, char* argv[]) {
  printf("sizeof(int): %ld\n", sizeof(int));
  printf("sizeof(Header): %ld\n", sizeof(Header));

  int nbytes = 1 * sizeof(int);
  int* p = (int*)my_malloc(nbytes);
  if (p != NULL) {
    printf("(%d-1)/%ld+2=%d\n", nbytes, sizeof(Header),
           ((Header*)p - 1)->s.size);
    my_free(p);
  }
  return 0;
}
