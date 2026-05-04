#include <stdio.h>

int main(void)
{
    unsigned int flags, mask;
    scanf("%hhu %hhu", &flags, &mask);
    if ((flags & mask) == 0){
        printf("no\n");
        return 0;
    }
    printf("yes\n");
    return 0;
}