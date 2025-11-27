// Q41: Swap first and last digit of a number.
#include <stdio.h>
int main() {
    int n, first, last, temp, pow10 = 1;
    scanf("%d", &n);
    last = n % 10;
    temp = n;
    while(temp >= 10) {
        temp /= 10;
        pow10 *= 10;
    }
    first = temp;
    int mid = n % pow10;
    mid /= 10;
    int result = last * pow10 + mid * 10 + first;
    printf("%d", result);
    return 0;
}
