#include<stdio.h>
int main(){
    int size=10,start=1;
    printf("Enter the size and starting value : ");scanf("%d%d",&size,&start);
    int a[size];a[0]=start;
    for(int i=1;i<size;i++)
        a[i]=a[i-1]+3;
    printf("The array is : ");
    for(int i=0;i<size;i++) printf("%d ",a[i]);
    return 0;
}