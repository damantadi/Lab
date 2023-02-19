#include<stdio.h>
int main()
{
    int n,r,copy;
    int s=0;
    int i=100;
    while(i<=2000){
        n=i;copy=n;
        s=n%10;n=n/10;
        while(n>0){
            r=n%10;
            s=s*10+r;
            n=n/10;
        }
        if(copy==s){
            printf("%d\n",copy);
            i++;
        }
        else{
            i++;
        }
    }
    return 0;
}