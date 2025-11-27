// Q3: Program to calculate area and perimeter of rectangle.
#include <stdio.h>
int main() {
    float l, b;
    scanf("%f %f", &l, &b);
    printf("Area = %f
", l * b);
    printf("Perimeter = %f", 2 * (l + b));
    return 0;
}
