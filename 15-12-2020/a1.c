#include<stdio.h>
int max(int a,int b){
    return (a>b)?a:b;
}
int main(){
    int a,b;printf("Enter 2 numbers : ");scanf("%d%d",&a,&b);
    printf("%d is greater.",max(a,b));
    return 0;
}