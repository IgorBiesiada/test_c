#include "library.h"

#include <stdio.h>

ibnt Policz(int a, int b) {
    return a + b;
}

void main(void) {
    printf("Hello, World!\n");
    printf("W pierwszym branchu 2+3", Policz(2, 3));
}