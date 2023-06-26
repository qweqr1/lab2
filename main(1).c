#include <stdio.h>

int main() {
    int num1, num2;

    printf("Введiть перше число: ");
    scanf("%d", &num1);

    printf("Введiть друге число: ");
    scanf("%d", &num2);

    printf("Залишок від ділення 2-го числа на 1-е: %d\n", num2 % num1);
  
    printf("Ціла частина від ділення 1-го числа на 2-е: %d\n", num1 / 
    num2);
  
    printf("Добуток чисел: %d\n", num1 * num2);

    return 0;
}
