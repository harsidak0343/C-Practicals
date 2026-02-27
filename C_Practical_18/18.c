#include <stdio.h>

void swapValue(int a, int b) {
    int temp = a; a = b; b = temp;
    printf("Inside swapValue: x=%d, y=%d\n", a, b);
}

void swapReference(int *a, int *b) {
    int temp = *a; *a = *b; *b = temp;
}

int main() {
    int x = 5, y = 10;
    
    swapValue(x, y);
    printf("After swapValue in main: x=%d, y=%d\n\n", x, y);
    
    swapReference(&x, &y);
    printf("After swapReference in main: x=%d, y=%d\n", x, y);
    return 0;
}
