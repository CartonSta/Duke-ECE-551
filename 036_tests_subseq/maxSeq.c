#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n) {
  size_t maxSeq = 0;
  if (n < 2) {
    return 0;
  }
  for (size_t i = 0; i < n - 1; i++) {
    if (array[i] < array[i + 1]) {
      maxSeq++;
    }
    maxSeq = 0;
  }
  return maxSeq;
}
