#include <stdio.h>

struct queue {
  int data[100];
  int head;
  int tail;
};

int main(int argc, char *argv[]) {
  struct queue q;
  q.head = 0;
  q.tail = 0;

  int i = 0;
  for (i = 0; i < 9; ++i) { // input 9 num
    scanf("%d", &q.data[q.tail]);
    ++q.tail;
  }

  while (q.head < q.tail) {
    printf("%d ", q.data[q.head]);
    ++q.head;

    q.data[q.tail] = q.data[q.head];
    ++q.tail;

    ++q.head;
  }
  printf("\n");
  return 0;
}
