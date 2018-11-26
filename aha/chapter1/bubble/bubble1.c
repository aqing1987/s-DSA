#include <stdio.h>

int main(int argc, char *argv[]) {
  int a[100], i, j, t, n;
  scanf("%d", &n); // get digits number
  for (i = 1; i <= n; ++i)
    scanf("%d", &a[i]);

  // time complexity O(N^2)
  for (i = 1; i <= n-1; ++i) {
    for (j = 1; j <= n-i; ++j) {
      if (a[j] < a[j+1]) {
        t = a[j];
        a[j] = a[j+1];
        a[j+1] = t;
      }
    }
  }

  // output
  for (i = 1; i <= n; ++i)
    printf("%d ", a[i]);
  printf("\n");

  return 0;
}
