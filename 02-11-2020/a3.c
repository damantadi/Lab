#include<stdio.h>
int main(){
    int num,power,i=0,temp;printf("Enter numm=ber and power : ");
    scanf("%d%d",&num,&power);
    temp=num;
    while(i<=power-2){
        num*=temp;
        i++;
    }
    printf("%d",num);
    return 0;
}