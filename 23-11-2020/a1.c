#include<stdio.h>
#define size 5
int main(){
    int a[size];printf("Enter %d numbers : ",size);
    for(int i=0;i<size;i++) scanf("%d",&a[i]);
    printf("Normal order : "); 
    for(int i=0;i<size;i++) printf("%d ",a[i]);
    printf("\nReverse order : ");
    for(int i=size-1;i>=0;i--) printf("%d ",a[i]);
    return 0;
}