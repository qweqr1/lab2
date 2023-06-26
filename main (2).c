#include <stdio.h>

int main() {
    int a = 4, b = -2, c = 20;
    float y;

    y = (a * b * c) / (a + b + c) - (a - b - c) / (a * b * c);

    printf("Значення функції у: %.2f\n", y);

    return 0;
}