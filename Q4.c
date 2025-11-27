// Q4: Program to calculate area and circumference of circle.
#include <stdio.h>
#define PI 3.14159
int main() {
    float r;
    scanf("%f", &r);
    printf("Area = %f
", PI * r * r);
    printf("Circumference = %f", 2 * PI * r);
    return 0;
}
