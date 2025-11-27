// Q2: Write a program to input two numbers and display sum, difference, product, quotient.
#include <stdio.h>
int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    printf("Sum = %f
", a + b);
    printf("Difference = %f
", a - b);
    printf("Product = %f
", a * b);
    if (b != 0) printf("Quotient = %f", a / b);
    else printf("Division by zero not allowed.");
    return 0;
}
