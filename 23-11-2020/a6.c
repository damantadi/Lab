#include<stdio.h>
#define size 5
int main(){
    int a[size];printf("Enter %d numbers : ",size);
    for(int i=0;i<size;i++) scanf("%d",&a[i]);
    int start=(size-1)/2;
    while(start>=0){
        int temp=a[start];
        a[start]=a[size-1-start];
        a[size-1-start]=temp;
        start--;
    }
    for(int i=0;i<size;i++) printf("%d ",a[i]);
    return 0;
}