#include <stdio.h>

void calculate(int a, int b, char op) {
    switch (op) {
        case '+': printf("Result: %d\n", a + b); break;
        case '-': printf("Result: %d\n", a - b); break;
        case '*': printf("Result: %d\n", a * b); break;
        case '/':
            if (b != 0) printf("Result: %.2f\n", (float)a / b);
            else printf("Error: Division by zero!\n");
            break;
        case '%':
            if (b != 0) printf("Result: %d\n", a % b);
            else printf("Error: Modulo by zero!\n");
            break;
        default: printf("Invalid operator!\n");
    }
}

int main() {
    int num1, num2;
    char op;

    printf("Enter expression (e.g., 10 + 5): ");
    scanf("%d %c %d", &num1, &op, &num2);

    calculate(num1, num2, op);
    return 0;
}
