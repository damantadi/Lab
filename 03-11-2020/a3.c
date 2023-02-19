#include<stdio.h>
int main(){
    int number,counter,copy,reverse=0;printf("Enter a number : ");scanf("%d",&number);
    copy=number;
    while(copy){
        int r=copy%10;
        reverse=reverse*10+r;
        copy=copy/10;
    }
    printf("%d",reverse);
    if(reverse==number){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}