#include <stdio.h>

int main(){
    unsigned int var;
    if (scanf("%u", &var) != 1) {printf("INPUT ERROR\n"); return 0;}

    printf("%s\n", (var / 1000 == 3) ? "yes" : "no");
    return 0;
}