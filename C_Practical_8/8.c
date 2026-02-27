#include <stdio.h>
int main() {
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Using conditional operator
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Greatest using conditional: %d\n", max);
    
    // Using if-else
    if (a >= b && a >= c) max = a;
    else if (b >= a && b >= c) max = b;
    else max = c;
    printf("Greatest using if-else: %d\n", max);
    
    return 0;
}
