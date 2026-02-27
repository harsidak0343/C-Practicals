#include <stdio.h>
#include <math.h>

void checkPrime(int n) {
    int isPrime = 1;
    if (n <= 1) isPrime = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) { isPrime = 0; break; }
    }
    if (isPrime) printf("Prime\n"); else printf("Not Prime\n");
}

void checkArmstrong(int n) {
    int temp = n, sum = 0, digits = 0, rem;
    while(temp != 0) { digits++; temp /= 10; }
    temp = n;
    while(temp != 0) { rem = temp % 10; sum += pow(rem, digits); temp /= 10; }
    if (sum == n) printf("Armstrong\n"); else printf("Not Armstrong\n");
}

void checkPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
    if (sum == n) printf("Perfect\n"); else printf("Not Perfect\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    checkPrime(n);
    checkArmstrong(n);
    checkPerfect(n);
    return 0;
}
