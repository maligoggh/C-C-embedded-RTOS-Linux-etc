/**
 * @file pool_allocator.c
 * @brief Статический пул памяти — замена malloc для embedded
 * 
 * @learned 2026-03-29: Пул фиксированного размера = нет фрагментации,
 * детерминированное время выделения, контроль в компиляции
 * 
 * @link c_cpp/memory/stack_vs_heap.md
 */

#include <stdint.h>
#include <stdbool.h>

// Конфигурация (меняй под проект)
#define POOL_BLOCK_SIZE     32      // размер одного блока
#define POOL_BLOCK_COUNT    16      // количество блоков

// Приватные данные
static uint8_t pool_memory[POOL_BLOCK_COUNT][POOL_BLOCK_SIZE];
static bool pool_used[POOL_BLOCK_COUNT] = {false};

/**
 * @brief Выделить блок из пула
 * @return Указатель на блок или NULL
 * 
 * O(1) в худшем случае — линейный поиск, но предсказуемый
 */
void* pool_alloc(void) {
    for (int i = 0; i < POOL_BLOCK_COUNT; i++) {
        if (!pool_used[i]) {
            pool_used[i] = true;
            return pool_memory[i];
        }
    }
    return NULL;  // Пул исчерпан — чёткая ошибка, не молчаливая
}

/**
 * @brief Вернуть блок в пул
 */
void pool_free(void* ptr) {
    if (ptr == NULL) return;
    
    // Проверяем, что указатель из нашего пула
    uint8_t* p = ptr;
    if (p >= &pool_memory[0][0] && 
        p < &pool_memory[POOL_BLOCK_COUNT][0]) {
        
        int idx = (p - &pool_memory[0][0]) / POOL_BLOCK_SIZE;
        pool_used[idx] = false;
    }
}

/**
 * @brief Остаток свободных блоков (для диагностики)
 */
int pool_available(void) {
    int count = 0;
    for (int i = 0; i < POOL_BLOCK_COUNT; i++) {
        if (!pool_used[i]) count++;
    }
    return count;
}
