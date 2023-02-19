#include<stdio.h>
int main(){
    int m,n,product=0;printf("Enter 2 numbers : ");scanf("%d%d",&m,&n);
    for(int i=0;i<n;i++)
        product+=m;
    printf("Required sum : %d",product);
    return 0;
}