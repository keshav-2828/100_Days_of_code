// Q22: Find profit or loss percentage.
#include <stdio.h>
int main() {
    float cp, sp;
    scanf("%f %f", &cp, &sp);
    if(sp > cp) printf("Profit%% = %f", (sp - cp) / cp * 100);
    else if(cp > sp) printf("Loss%% = %f", (cp - sp) / cp * 100);
    else printf("No Profit No Loss");
    return 0;
}
