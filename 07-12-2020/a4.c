#include<stdio.h>
int main(){
    int number,reverse=0;printf("Enter a number : ");scanf("%d",&number);
    next:
        reverse+=number%10;
        number/=10;
        if(number>0) {
            reverse*=10;
            goto next;
        }
    printf("Reversed number is : %d",reverse);
    return 0;
}