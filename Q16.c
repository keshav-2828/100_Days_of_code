// Q16: Find largest of three numbers.
#include <stdio.h>
int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if(a >= b && a >= c) printf("Largest = %f", a);
    else if(b >= a && b >= c) printf("Largest = %f", b);
    else printf("Largest = %f", c);
    return 0;
}
