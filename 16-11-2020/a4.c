#include<stdio.h>
int main(){
    int number,power=1;printf("Enter a number : ");scanf("%d",&number);
    while(number!=0){
        if(number<power){
            break;
        }
        else{
            power*=2;
        }
    }
    printf("Upper : %d Lower : %d",power,(power/2));
    return 0;
}