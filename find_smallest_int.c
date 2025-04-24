#include "find_smallest_int.h"

int find_smallest_int(int *array, size_t len)
{int min = array[0];
  for(size_t i = 0; i < len; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
    return min;
}