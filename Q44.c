// Q44: Sum of series 1 + 3/4 + 5/6 + ... n terms.
#include <stdio.h>
int main() {
    int n;
    float sum = 0, num = 1, den = 2;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += num / den;
        num += 2;
        den += 2;
    }
    printf("%f", sum);
    return 0;
}
