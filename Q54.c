// Q54: Centered diamond pattern.
#include <stdio.h>
int main() {
    int i, j, s;
    for(i = 1; i <= 7; i += 2) {
        for(s = 0; s < (7 - i)/2; s++) printf(" ");
        for(j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    for(i = 5; i >= 1; i -= 2) {
        for(s = 0; s < (7 - i)/2; s++) printf(" ");
        for(j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    return 0;
}
