#include<stdio.h>
int main(){
    int size=10,start=1;
    printf("Enter the size (even number) and starting value : ");scanf("%d%d",&size,&start);
    int a[size];a[0]=a[size/2]=start;
    for(int i=1;i<(size/2);i++)
        a[i]=a[i+(size/2)]=a[i-1]+3;
    printf("The array is : ");
    for(int i=0;i<size;i++) printf("%d ",a[i]);
    return 0;
}