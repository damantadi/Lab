#include<stdio.h>
int main(){
    int number,dig=0;;printf("Enter a number : ");scanf("%d",&number);
    while(number){
        dig++;
        number/=10;
    }
    printf("Number of digits : %d",dig);
    return 0;
}