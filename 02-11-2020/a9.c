#include<stdio.h>
int main(){
    int number,digit=0;printf("Enter a number : ");scanf("%d",&number);int copy=number;
    while(copy){
        digit++;
        copy/=10;
    }
    if(digit%2==0){
        int i=0,factor=1;
        while(i<(digit/2)-1){
            factor*=10;
            i++;
        }
        printf("%d",((number/factor)%100));
    }
    else{
        int i=0,factor=1;
        while(i<((digit-1)/2)){
            factor*=10;
            i++;
        }
        printf("%d",((number/factor)%10));
    }
    return 0;
}