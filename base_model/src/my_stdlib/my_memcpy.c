#include "my_stdlib.h"

void my_memcpy(char *dest, char *src, size_t size) {
    int i;
    for (i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}