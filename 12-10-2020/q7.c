#include<stdio.h>
int main(){
    int number,copy=0,reverse=0;
    printf("Enter a 4 digit number : ");scanf("%d",&number);
    copy=number;
    reverse+=(number%10)*1000;number/=10;
    reverse+=(number%10)*100;number/=10;
    reverse+=(number%10)*10;number/=10;
    reverse+=number;
    if(reverse==copy){
        printf("\n0");
    }
    else{
        printf("\n1");
    }
}