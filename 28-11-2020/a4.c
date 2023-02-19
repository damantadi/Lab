#include<stdio.h>
int main(){
    int number,count=0,a[32]={0};printf("Enter a decimal number : ");scanf("%d",&number);
    while(number>0){
      a[count++]=number%2;
      number/=2;
    }
    for(int i=31;i>=0;i--){
        if((i+1)%8==0) printf(" ");
        printf("%d",a[i]);
    }
    return 0;
}