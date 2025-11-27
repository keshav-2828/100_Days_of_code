// Q40: Print 1's complement of a binary number.
#include <stdio.h>
#include <string.h>
int main() {
    char b[100];
    scanf("%s", b);
    for(int i = 0; b[i] != '\0'; i++) {
        if(b[i] == '0') b[i] = '1';
        else if(b[i] == '1') b[i] = '0';
    }
    printf("%s", b);
    return 0;
}
