#include<stdio.h>
#define size 5
int main(){
    int a[size];printf("Enter %d numbers : ",size);
    for(int i=0;i<size;i++) scanf("%d",&a[i]);
    for(int i=0;i<size;i+=2){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<size;i++) printf("%d ",a[i]);
    return 0;
}