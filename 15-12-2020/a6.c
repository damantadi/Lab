#include<stdio.h>
int prime(int number){
    for(int i=2;i<number;i++){
        if(number%i==0) return 0;
    }
    return 1;
}
int divider(int number){
    int flag=0;
    for(int i=2;i<=number-1;i++){
        if(prime(i)&&prime(number-i)){
            flag=i;
            break;
        }
    }
    return flag;
}
int main(){
    int number;printf("Enter an even number greater than 3 : ");scanf("%d",&number);
    int val=divider(number);
    if(val) printf("%d + %d = %d",val,(number-val),number);
    else printf("Not possible to divide into primes");
    return 0;
}