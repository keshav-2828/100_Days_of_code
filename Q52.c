// Q52: Given star pattern.
#include <stdio.h>
int main() {
    int rows[] = {1,1,2,1,2,3,5,1,3,1};
    int idx = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < rows[i]; j++) printf("*\n");
        printf("\n");
    }
    return 0;
}
