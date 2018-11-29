#include <stdio.h>

int main(int argc, char *argv[]) {
  int q[102] = {6, 3, 1, 7, 5, 8, 9, 2, 4}, head, tail;

  // init queue
  head = 0;
  tail = 9; // point to next of last num

  while (head < tail) { // not empty
    printf("%d ", q[head]);

    // dequeue
    ++head;

    // move new head to tail
    q[tail] = q[head];
    ++tail;

    // dequeue
    ++head;
  }
  printf("\n");
  return 0;
}
