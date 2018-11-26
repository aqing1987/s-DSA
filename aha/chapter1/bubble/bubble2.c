#include <stdio.h>

struct student {
  char name[24];
  int score;
};

int main(int argc, char *argv[]) {
  struct student a[100], t;
  int i, j, n;
  scanf("%d", &n); // get students number
  for (i = 1; i <= n; ++i)
    scanf("%20s %d", a[i].name, &a[i].score);

  // time complexity O(N^2)
  for (i = 1; i <= n-1; ++i) {
    for (j = 1; j <= n-i; ++j) {
      if (a[j].score < a[j+1].score) {
        t = a[j];
        a[j] = a[j+1];
        a[j+1] = t;
      }
    }
  }

  // output
  for (i = 1; i <= n; ++i)
    printf("%s %d\n", a[i].name, a[i].score);

  return 0;
}
