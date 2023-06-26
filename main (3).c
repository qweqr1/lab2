#include <stdio.h>
#include <math.h>

int main() {
    double a, x, y, z;

    printf("Введiть значення х: ");
    scanf("%lf", &x);
    
    printf("Введiть значення y: ");
    scanf("%lf", &y);
    
    printf("Введiть значення z: ");
    scanf("%lf", &z);

    double numerator = sqrt(x) + 2 * sqrt(y * z);
    double denominator = sqrt(y) - 2 * sqrt(x * z);

    if (denominator != 0) {
        a = numerator / denominator;
        printf("Значення: %.2lf\n", a);
    } else {
        printf("Помилка: ділення на нуль!\n");
    }

    return 0;
}