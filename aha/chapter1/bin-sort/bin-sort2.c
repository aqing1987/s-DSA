/**
 * Sort number in the range 0~1000
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
  int book[1001], i, j, t, n;

  for (i = 0; i < 1001; ++i)
    book[i] = 0;

  printf("input num:");
  scanf("%d", &n);
  for (i = 0; i < n; ++i) {
    scanf("%d", &t);
    book[t]++;
  }

  for (i = 1000; i >= 0; --i) {
    for (j = 1; j <= book[i]; ++j) {
      printf("%d ", i);
    }
  }
  printf("\n");

  getchar();

  return 0;
}
