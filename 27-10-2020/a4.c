#include<stdio.h>
int main(){
    int a,b;char c;
    printf("Enter two numbers : ");scanf("%d%d",&a,&b);
    printf("Enter an operator : ");scanf(" %c",&c);
    switch (c)
    {
    case '+':
        printf("Sum : %d",(a+b));
        break;
    case '-':
        printf("Difference : %d",(a-b));
        break;
    case '/':
        printf("Quotient : %.2f",(a/b));
        break;
    case '*':
        printf("Product : %d",(a*b));
        break;
    case '%':
        printf("Remainder : %d",(a%b));
        break;
    default:
        printf("Unknown operator : %c",c);
        break;
    }
    return 0;
}