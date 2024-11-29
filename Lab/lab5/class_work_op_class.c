#include <stdio.h>


int main() {
   
    int a, b;
    float div;  
    char op;
    printf("input two numbers and a mathematical operator: ");
    scanf("%d %d %c", &a, &b, &op);


    div=(float)a /b; 
    // In C, if both operands are integers (e.g., a / b without casting), the division is performed as integer division, which discards any fractional part. By casting one operand (in this case, a) to float, the operation becomes a floating-point division.


    if(op=='+') {
        printf("%d%c%d=%d\n", a, op, b, a+b);
    }

    else if(op=='-') {
        printf("%d%c%d=%d\n", a, op, b, a-b);
    }

    else if(op=='*') {
        printf("%d%c%d=%d\n", a, op, b, a*b);
    }

    else if(op=='/') {
        printf("%d%c%d=%.2f\n", a, op, b, div);
    }




    return 0;
}
