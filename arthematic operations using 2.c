#include <stdio.h>
int main() {
    int a,b,add,sub,mul,mod;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    mod=a%b;
    printf("Addition: %d\n", add);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);
    printf("Modulus: %d\n", mod);
    return 0; 
}
