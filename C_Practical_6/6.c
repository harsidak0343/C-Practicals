#include <stdio.h>
#include <math.h>
int main() {
    float u, a, t, b, c, p, V, S, T, H;
    // Dummy values for evaluation
    u = 10; a = 9.8; t = 5; b = 4; c = 2; p = 3;
    V = u + a * t;
    S = u * t + 0.5 * a * t * t;
    T = 2 * a + sqrt(b) + 9 * c;
    H = sqrt(b * b + p * p);
    printf("V = %.2f\nS = %.2f\nT = %.2f\nH = %.2f\n", V, S, T, H);
    return 0;
}
