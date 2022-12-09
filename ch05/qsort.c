#include <string.h>

void swap(char* v[], int i, int j) {
  char* tmp;
  tmp = v[i];
  v[i] = v[j];
  v[j] = tmp;
}

void qsort(char* v[], int left, int right) {
  if (left >= right) return;

  int last = left;
  for (int i = left + 1; i <= right; i++) {
    if (strcmp(v[i], v[left]) < 0) {
      swap(v, ++last, i);
    }
  }
  swap(v, left, last);
  qsort(v, left, last - 1);
  qsort(v, last + 1, right);
}
