// Q60: Count positive, negative, zero elements.
#include <stdio.h>
int main() {
    int n, a[100], p = 0, neg = 0, z = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] > 0) p++;
        else if(a[i] < 0) neg++;
        else z++;
    }
    printf("Positive = %d Negative = %d Zero = %d", p, neg, z);
    return 0;
}
