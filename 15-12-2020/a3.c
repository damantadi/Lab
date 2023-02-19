#include<stdio.h>
int digi_sum(int number){
    int sum=0;
    while(number>0){
        sum+=number%10;
        number/=10;
    }
    return sum;
}
int main(){
    int number;printf("Enter a number : ");scanf("%d",&number);
    printf("Sum of digits is : %d",digi_sum(number));
    return 0;
}