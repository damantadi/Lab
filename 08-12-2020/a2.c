#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter x and y : ");scanf("%d%d%d",&x,&y,&z);
    int *a=&x,*b=&y,*c=&z;
    printf("Sum = %d",(*a+*b+*c));
    return 0;
}