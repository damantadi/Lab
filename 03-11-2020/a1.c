#include<stdio.h>
int main(){
    int number,i=1,fac=1;printf("Enter a number : ");scanf("%d",&number);
    float sum=1.0;
    while(i<=number){
        fac*=i;
        sum+=(1.0/fac);
        i++;
    }
    printf("Required expression value : %f",sum);
    return 0;
}