#include<stdio.h>
int main(){
    int number;printf("Enter a number : ");scanf("%d",&number);
    next:
        printf("%d\n",number%10);
        number/=10;
        if(number>0) goto next;
    return 0;
}