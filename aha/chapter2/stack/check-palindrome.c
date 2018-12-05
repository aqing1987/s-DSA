#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char a[101], s[101];
  int i, len, mid, next, top;

  fgets(a, 100, stdin);
  len = strlen(a);
  if (len > 1 && a[len-1] == '\n')
    a[len-1] = '\0';

  len = strlen(a);
  mid = len/2;
  printf("str: %s, len: %d, mid: %d\n", a, len, mid);

  top = 0;

  // in stack
  for (i = 0; i < mid; ++i)
    s[++top] = a[i];

  // check strlen even or odd
  if (len % 2)
    next = mid + 1;
  else
    next = mid;

  // check
  for (i = next; i < len; ++i) {
    if (a[i] != s[top--])
      break;
  }

  if (top == 0)
    printf("y\n");
  else
    printf("n\n");

  return 0;
}
