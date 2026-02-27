#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

int main() {
    struct Distance d1, d2, sum;
    printf("Enter d1 (feet inch): "); scanf("%d %f", &d1.feet, &d1.inch);
    printf("Enter d2 (feet inch): "); scanf("%d %f", &d2.feet, &d2.inch);
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    while (sum.inch >= 12.0) {
        sum.inch -= 12.0;
        sum.feet++;
    }
    printf("Total Distance: %d feet %.2f inches\n", sum.feet, sum.inch);
    return 0;
}
