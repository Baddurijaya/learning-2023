#include<stdio.h>
int main() {
    int num1 = 10;
    int num2 = 20;

    int max_if_else = find_max_if_else(num1, num2);
    int max_ternary = find_max_ternary(num1, num2);

    printf("Using if-else: %d\n", max_if_else);
    printf("Using ternary operator: %d\n", max_ternary);

    return 0;
}