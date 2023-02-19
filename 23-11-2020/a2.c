#include<stdio.h>
#define size 5
int main(){
    int a[size],even_sum=0,odd_product=1;printf("Enter %d numbers : ",size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0) even_sum+=a[i];
        else odd_product*=a[i];
    }
    printf("Sum of even numbers : %d",even_sum);
    printf("\nProduct of odd numbers : %d",odd_product);
    return 0;
}