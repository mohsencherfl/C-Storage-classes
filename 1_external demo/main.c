#include <stdio.h>

int count;
extern void counter();

int main() {
    count = 0;
    counter();  // Output: Count: 1
    counter();  // Output: Count: 2
    counter();  // Output: Count: 2
    counter();  // Output: Count: 2
    counter();  // Output: Count: 2
    counter();  // Output: Count: 2
    counter();  // Output: Count: 2
    counter();  // Output: Count: 2
    counter();  // Output: Count: 2
    counter();  // Output: Count: 2
    counter();  // Output: Count: 2
    return 0;
}

