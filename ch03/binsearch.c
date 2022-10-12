#include <stdio.h>

int binsearch(int x, int v[], int n) {
  int low = 0;
  int high = n - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (x < v[mid]) {
      high = mid - 1;
    } else if (x > v[mid]) {
      low = mid + 1;
    } else {
      return mid;
    }
  }
  return -1;
}

int main() {
  int n;
  printf("Please input the array size: ");
  scanf("%d", &n);

  int v[n];
  printf("Please input %d sorted ascending numbers: ", n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &v[i]);
  }

  int x;
  printf("Please input the number you want to search: ");
  scanf("%d", &x);
  int index = binsearch(x, v, n);
  if (index == -1) {
    printf("%d is not found!\n", x);
  } else {
    printf("%d is the %dth element.\n", x, index + 1);
  }
}