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
    while(power>=1){
        if(number<power){
            printf("%d",0);
        }
        else{
            number=number-power;
            printf("%d",1);
        }
        power/=2;
    }
    return 0;
}