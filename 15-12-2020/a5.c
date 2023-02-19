#include<stdio.h>
void decimal(float number){
    for(int i=0;i<2;i++){
        number*=10;
        int a=number;
        printf("%d",a%10);
    }
}
int main(){
    float number;printf("Enter a real number : ");scanf("%f",&number);
    decimal(number);
    return 0;
}