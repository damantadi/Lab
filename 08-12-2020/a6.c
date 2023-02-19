#include<stdio.h>
int main(){
    int size;printf("Enter array of even size : ");scanf("%d",&size);
    int a[size];
    printf("Enter array elements : ");for(int i=0;i<size;i++) scanf("%d",&a[i]);
    int *pos = &a[0];
    for(int *i=pos ; i<(a+(size/2)) ; i++) printf("%d %d\n",*i,*(i+size/2));
    return 0;
}