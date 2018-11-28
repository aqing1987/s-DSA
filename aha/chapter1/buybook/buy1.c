#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int a[1001], n, i, t;

  memset(a, 0, sizeof(a));

  scanf("%d", &n);
  for (i = 1; i <= n; ++i) { // read in n ISBN
    scanf("%d", &t);
    a[t] = 1;
  }

  for (i = 1; i <= 1000; ++i) // check whole bins
    if (a[i] == 1)
      printf("%d ", i);

  printf("\n");
  return 0;
}
