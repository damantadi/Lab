#include<stdio.h>
int main(){
    int size,count=0;printf("Input size of array : ");scanf("%d",&size);
    printf("Enter array elements : ");int a[size];
    for(int i=0;i<size;i++) scanf("%d",&a[i]);
    printf("Enter element to be counted : ");int search;scanf("%d",&search);
    for(int i=0;i<size;i++)
        if(a[i]==search) count++;
    printf("Frequency of %d in array is : %d",search,count);
    return 0;
}