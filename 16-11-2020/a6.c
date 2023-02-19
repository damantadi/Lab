#include<stdio.h>
int main(){
    int number,power,new_num=1;printf("Enter number and power : ");scanf("%d%d",&number,&power);
    for(int i=0;i<power;i++){
        new_num*=number;
    }
    printf("%d",new_num);
    return 0;
}