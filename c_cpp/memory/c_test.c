#include <stdint.h>
#include <stdio.h>

int main() {
    uint32_t reg = 0;
    
    // Установить биты 0, 3, 7
    reg |= (1 << 0) | (1 << 3) | (1 << 7);
    printf("Set bits 0,3,7: 0x%X (expected 0x89)\n", reg);
    
    // Сбросить бит 3
    reg &= ~(1 << 3);
    printf("Clear bit 3: 0x%X (expected 0x81)\n", reg);
    
    // Проверить бит 7
    if (reg & (1 << 7)) {
        printf("Bit 7 is set\n");
    }
    
    // Инвертировать бит 0
    reg ^= (1 << 0);
    printf("Toggle bit 0: 0x%X (expected 0x80)\n", reg);
    
    return 0;
}