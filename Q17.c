// Q17: Roots of quadratic equation.
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d;
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    if(d > 0) printf("Real and distinct");
    else if(d == 0) printf("Real and equal");
    else printf("Imaginary");
    return 0;
}
