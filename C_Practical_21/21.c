#include <stdio.h>

void modifyValue(int *ptr) {
    *ptr = *ptr + 10;
}

int main() {
    int a = 20;
    printf("Value before passing pointer: %d\n", a);
    modifyValue(&a);
    printf("Value after passing pointer: %d\n", a);
    return 0;
}
