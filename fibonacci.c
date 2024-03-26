#include <stdio.h>

int is_sqfibonacci(int num) {
    int a = 0, b = 1;
    while (a < num) {
        int temp = a;
        a = b;
        b = temp + b;
    }
    return a == num;
}

int main() {
    int num;
    printf("Digite um número e vejá se ele está na sequência de Fibonacci: ");
    scanf("%d", &num);
    if (is_sqfibonacci(num)) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }
    return 0;
}
