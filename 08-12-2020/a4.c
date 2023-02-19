#include<stdio.h>
int main(){
    int size,position;printf("Enter array size : ");scanf("%d",&size);
    int a[size];
    printf("Enter array elements : ");for(int i=0;i<size;i++) scanf("%d",&a[i]);
    printf("Enter position : ");scanf("%d",&position);
    int *pos = &a[position];
    for(int *i=pos ; i<(a+size) ; i++) printf("%d ",*i);
    return 0;
}