#include<stdio.h>
int main(){
    int range;printf("Enter a range : ");scanf("%d",&range);
    for(int i=0;i<((range-1)/2);i++){
        printf("(%d,%d),",(i+1),((range+1)-(i+1)));
    }
    (range%2==0)?(printf("(%d,%d)",(range/2),((range/2)+1))):printf("%d",((range+1)/2));
    return 0;
}