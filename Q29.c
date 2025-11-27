// Q29: Factorial of a number.
#include <stdio.h>
int main() {
    int n;
    long long fact = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) fact *= i;
    printf("Factorial = %lld", fact);
    return 0;
}
