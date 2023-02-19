#include<stdio.h>
int main(){
    int size;printf("Enter array size : ");scanf("%d",&size);
    int a[size];
    printf("Enter array elements : ");for(int i=0;i<size;i++) scanf("%d",&a[i]);
    int *pos = &a[size-1];
    for(int *i=pos ; i>=a ; i--) printf("%d ",*i);
    return 0;
}