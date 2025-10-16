// C Program to make a Simple Calculator using 
// switch-case statements
#include <stdio.h>
#include <float.h>

int main() {
    char op;
    double a, b, res;

    // Read the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    // Read the two numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);
    
    // Define all four operations in the corresponding
    // switch-case
    switch (op) {
    case '+':
        res = a + b;
        printf("%d",res);
        break;
    case '-':
        res = a - b;
        printf("%d",res);
        break;
    case '*':
         res = a * b;
         printf("%d",res);
        break;
    case '/':
        res = a / b;
        printf("%d",res);
        break;
}

    
    return 0;
}

