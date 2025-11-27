// Q45: Sum of series 2/3 + 4/7 + 6/11 + ... n terms.
#include <stdio.h>
int main() {
    int n;
    float sum = 0;
    int num = 2, den = 3;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2;
        den += 4;
    }
    printf("%f", sum);
    return 0;
}
