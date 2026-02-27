#include <stdio.h>
#define PI 3.14159

float calcArea(float r) { return PI * r * r; }
float calcCircumference(float r) { return 2 * PI * r; }

int main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area: %.2f\nCircumference: %.2f\n", calcArea(r), calcCircumference(r));
    return 0;
}
