#include <stdio.h>

int ternary(int a, int b) {
    return (a > b) ? a : b;
}

int if_else(int a, int b) {
    if (a > b) return a;
    return b;
}