#include <stdio.h>


int main() {
    int add(int a, int b) 
    {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) 
{
    return a * b;
}

int divi(int a, int b) {
    return a / b;
}
    int a, b, result;
    char sym;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &sym);   

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(sym == '+') {
        result = add(a, b);
    }
    else if(sym == '-') {
        result = sub(a, b);
    }
    else if(sym == '*') {
        result = mul(a, b);
    }
    else if(sym == '/') {
        result = divi(a, b);
    }
    else {
        printf("Invalid operator");
        return 0;
    }

    printf("Result = %d", result);
    return 0;}



