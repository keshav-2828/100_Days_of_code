// Q7: Swap two numbers without third variable.
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d", a, b);
    return 0;
}
