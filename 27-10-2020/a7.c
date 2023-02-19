#include<stdio.h>
#include<math.h>
int main(){
    int place,number;
    printf("Enter a number and places to be rounded : ");scanf("%d%d",&number,&place);
    int round=pow(10,(place));
    int round_num=(number/round)%10;
    if(round<=number){
        if(round_num>5){
            printf("%d",((number/round)*round+pow(10,(place+1))));
        }
    }
    return 0;
}