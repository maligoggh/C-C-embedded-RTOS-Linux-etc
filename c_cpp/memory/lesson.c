#include <stdio.h>

int main(void)
{
    int item;
    printf(
        "1. Learning C language\n"
        "2. Learning Python language\n"
        "3. Learning Java language\n"
        "4. Learning C++ language\n"
        "5. Exit\n"
    );
    if (scanf("%d", &item) != 1) {printf("INPUT ERROR\n"); return 0;}

    switch(item){
        case 1:
            printf("Learning C language\n");
            break;
        case 2:
            printf("Learning Python language\n");
            break;
        case 3:
            printf("Learning Java language\n");
            break;
        case 4:
            printf("Learning C++ language\n");
            break;
        case 5:
            return 0;
    }
    printf("Nice One!\n");
    return 0;
}