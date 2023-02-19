#include<stdio.h>
int main(){
    int range,i=1;float exp;printf("Enter number : ");scanf("%d",&range);
    while(i<=range){
        exp+=(1.0/i);
        i++;
    }
    printf("Required value : %0.2f",exp);
    return 0;
}