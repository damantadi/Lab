#include<stdio.h>
int main(){
    int size;printf("Enter array size : ");scanf("%d",&size);
    int a[size],b[size];
    printf("Input for array using (a+i) : ");
    for(int i=0;i<size;i++) scanf("%d",(a+i));
    printf("Input for array using normal method : ");
    for(int i=0;i<size;i++) scanf("%d",&b[i]);
    printf("Printing using first method : ");
    for(int i=0;i<size;i++) printf("%d ",*(a+i));
    printf("Printing using second method : ");
    for(int i=0;i<size;i++) printf("%d ",b[i]);
    return 0;
}