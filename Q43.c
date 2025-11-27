// Q43: Check strong number.
#include <stdio.h>
int main() {
    int n, temp, sum = 0;
    scanf("%d", &n);
    temp = n;
    while(temp > 0) {
        int d = temp % 10;
        int fact = 1;
        for(int i = 1; i <= d; i++) fact *= i;
        sum += fact;
        temp /= 10;
    }
    if(sum == n) printf("Strong");
    else printf("Not Strong");
    return 0;
}
