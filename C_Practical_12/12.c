#include <stdio.h>
int main() {
    int n, count = 0, reverse = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        count++;
        n /= 10;
    }
    printf("Digits count: %d\nReverse: %d\n", count, reverse);
    return 0;
}
