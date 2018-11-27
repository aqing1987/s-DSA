/**
 * Mathematical analysis of quicksort shows that, on average, the
 * algorithm takes O(n log n) compararisons to sort n items. In the
 * worst case, it makes O(n^2) compararisons, though this behavior is
 * rare.
 */

/**
 * In pseudocode, a quicksort that sorts elements lo through hi
 * (inclusive) of an array A can be expressed as:
 * algorithm quicksort(A, lo, hi) is
    if lo < hi then
        p := partition(A, lo, hi)
        quicksort(A, lo, p - 1 )
        quicksort(A, p + 1, hi)

 * Sorting the entire array is accomplished by quicksort(A, 0, length(A) - 1).
 */
#include <stdio.h>

int a[101], n;

void quicksort(int left, int right) {
  int i, j, t, temp;
  if (left > right)
    return;

  temp = a[left]; // store the pivot
  i = left;
  j = right;

  while (i != j) {
    // find from right first!
    while (a[j] >= temp && i < j)
      --j;

    // then find from left
    while (a[i] <= temp && i < j)
      ++i;

    // swap
    if (i < j) {
      t = a[i];
      a[i] = a[j];
      a[j] = t;
    }
  }

  // finally put the pivot to the right position
  a[left] = a[i];
  a[i] = temp;

  quicksort(left, i-1); // process left unsorted
  quicksort(i+1, right); // process right unsorted
}

int main(int argc, char *argv[]) {
  int i;

  // read in data
  scanf("%d", &n);
  for (i = 1; i <= n; ++i)
    scanf("%d", &a[i]);

  quicksort(1, n);

  // output result
  for (i = 1; i <= n; ++i)
    printf("%d ", a[i]);
  printf("\n");
  return 0;
}

