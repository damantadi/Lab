#include<stdio.h>
int main(){
    int size;printf("Enter the size of the array : ");scanf("%d",&size);
    int a[size];printf("Enter array elements : ");for(int i=0;i<size;i++) scanf("%d",&a[i]);
    int max=*a;
    for(int *i=a;i<(a+size);i++){
        if(*i>max) max=*i;
    }
    printf("Maximum element is : %d",max);
    return 0;
}