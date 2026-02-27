#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, sum = 0, digits = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    for (; temp != 0; temp /= 10) digits++;
    temp = n;
    for (; temp != 0; temp /= 10) {
        rem = temp % 10;
        sum += pow(rem, digits);
    }
    if (sum == n) printf("Armstrong\n");
    else printf("Not Armstrong\n");
    return 0;
}
