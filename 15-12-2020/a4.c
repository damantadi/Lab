#include<stdio.h>
int prime(int number){
    for(int i=2;i<number;i++){
        if(number%i==0) return 0;
    }
    return 1;
}
int main(){
    int number;printf("Enter a number to check : ");scanf("%d",&number);
    prime(number)?printf("%d is a prime number",number):printf("%d is not a prime number",number);
    return 0;
}