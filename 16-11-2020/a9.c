#include<stdio.h>
int main(){
    int number,flag=0;printf("Enter a number : ");scanf("%d",&number);
    for(int i=2;i<number;i++){
        if(number%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Not a prime number");
    }
    else{
        printf("It is a prime number");
    }
    return 0;
}