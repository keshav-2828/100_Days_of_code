// Q25: Basic calculator using switch-case.
#include <stdio.h>
int main() {
    char op;
    float a, b;
    scanf("%f %f %c", &a, &b, &op);
    switch(op) {
        case '+': printf("%f", a + b); break;
        case '-': printf("%f", a - b); break;
        case '*': printf("%f", a * b); break;
        case '/': if(b != 0) printf("%f", a / b); else printf("Error"); break;
        case '%': printf("%d", (int)a % (int)b); break;
        default: printf("Invalid");
    }
    return 0;
}
