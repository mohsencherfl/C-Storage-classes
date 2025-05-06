#include <stdio.h>

extern int count;

void counter() {
    printf("Count: %d\n", count);
    count++;
}
