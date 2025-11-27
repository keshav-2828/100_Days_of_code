// Q28: Product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n;
    long long product = 1;
    scanf("%d", &n);
    for(int i = 2; i <= n; i += 2) product *= i;
    printf("Product = %lld", product);
    return 0;
}
