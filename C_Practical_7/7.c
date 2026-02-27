#include <stdio.h>
int main() {
    int x = 5, y = 10, temp;
    
    // Using temp variable
    temp = x; x = y; y = temp;
    printf("After swap with temp: x=%d, y=%d\n", x, y);
    
    // Without temp variable
    x = x + y; y = x - y; x = x - y;
    printf("After swap without temp: x=%d, y=%d\n", x, y);
    return 0;
}
