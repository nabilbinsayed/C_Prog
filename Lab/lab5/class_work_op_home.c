#include <stdio.h>
int main()

{ 
  int a, b, add, subtract, multiply; 
  char op; 
   

  printf("Enter two numbers and a character: ");
  scanf("%d %d %c", &a, &b, &op);

  add=a+b; 
  subtract=a-b;
  multiply=a*b;
  float div=a*1.0f/b; // one of the operands has to be float type. Multiplying by 1.0f forces it to be float type. Explicit casting by div=(float)a /b also works, where a is float casted. 

  if (op=='+') {
    printf("%d%c%d=%d\n", a, op, b, add);
  }
  
  else if (op=='-') {
    printf("%d%c%d=%d\n", a, op, b, subtract);
  }
  
  else if (op=='*') {
    printf("%d%c%d=%d\n", a, op, b, multiply);
  }   
  
  else if (op=='/') {
    printf("%d%c%d=%.3f\n", a, op, b, div);
  }
  else {
    printf("Invalid operation\n");
  }

 
 return 0; 
} 