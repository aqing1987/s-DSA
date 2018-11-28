#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int a[1001], n, i, j, t;

  memset(a, 0, sizeof(a));

  scanf("%d", &n);
  for (i = 1; i <= n; ++i) { // read in n ISBN
    scanf("%d", &a[i]);
  }

  // bubble sort
  for (i = 1; i <= n-1; ++i) {
    for (j = 1; j <= n-i; ++j) {
      if (a[j] > a[j+1]) {
        t = a[j];
        a[j] = a[j+1];
        a[j+1] = t;
      }
    }
  }

  printf("%d ", a[1]);
  for (i = 2; i <= n; ++i) {
    if (a[i] != a[i-1])
      printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
