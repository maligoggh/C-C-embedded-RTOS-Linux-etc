// @learned 2026-04-09: Приоритет инкрементов/декрементов

#include <stdio.h>

int main()
{
    int count;
    scanf("%d", &count);
    int p = 7 * count++ + 2; // считает и выводит p для count, выводит count + 1
    printf("%d", p, count);
    return 0;
}




// @fixme Проверить на реальном железе
