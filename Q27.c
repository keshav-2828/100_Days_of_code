// Q27: Sum of first n odd numbers.
#include <stdio.h>
int main() {
    int n, sum = 0, odd = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        sum += odd;
        odd += 2;
    }
    printf("Sum = %d", sum);
    return 0;
}
