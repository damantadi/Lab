#include<stdio.h>
#define size 5
int main(){
    int a[size],min=0,max=0;printf("Enter %d numbers : ",size);
    for(int i=0;i<size;i++) scanf("%d",&a[i]);
    min=max=a[0];
    for(int i=1;i<size;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    printf("Maximum number in array is : %d",max);
    printf("\nMinimum number in array is : %d",min);
    return 0;
}