// Q9: Simple and Compound Interest calculation.
#include <stdio.h>
#include <math.h>
int main() {
    float p, r, t;
    scanf("%f %f %f", &p, &r, &t);
    float si = (p * r * t) / 100;
    float ci = p * pow((1 + r/100), t) - p;
    printf("SI = %f
CI = %f", si, ci);
    return 0;
}
