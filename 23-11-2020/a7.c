#include<stdio.h>
#define size 10
int main(){
    int a[size]={1,1};
    for(int i=2;i<size;i++) a[i]=a[i-1]+a[i-2];
    for(int i=0;i<size;i++) printf("%d ",a[i]);
    return 0;
}