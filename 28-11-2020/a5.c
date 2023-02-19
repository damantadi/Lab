#include<stdio.h>
int main(){
    int size;printf("Input size of array : ");scanf("%d",&size);
    printf("Enter array elements : ");int a[size];
    for(int i=0;i<size;i++) scanf("%d",&a[i]);
    printf("Enter element to be searched : ");int search;scanf("%d",&search);
    for(int i=0;i<size;i++)
        if(a[i]==search) printf("Found at index : %d\n",i);
    return 0;
}