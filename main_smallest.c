#include <stdio.h>
#include "find_smallest_int.h"

int main() {
    size_t len;
    printf ("Put massive length\n");
    scanf ("%zu", &len);

    int array[len];
    printf ("Put massive\n");
    for (size_t i = 0; i < len; i++) {
        scanf ("%d", & array[i]);
    }

    printf ("Minimum in massive: %d\n", find_smallest_int(array, len));
    return 0;
}