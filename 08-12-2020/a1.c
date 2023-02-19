#include<stdio.h>
int main(){
    int x,y;
    printf("Enter x and y : ");scanf("%d%d",&x,&y);
    printf("Values of x and y : %d %d\n",x,y);
    printf("Addressess of x and y : %p %p",&x,&y);
    return 0;
}