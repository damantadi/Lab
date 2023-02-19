#include<stdio.h>
int main(){
    int i=10;
    next:
        printf("%d ",i);
        i-=3;
        if(i>0) goto next;
    return 0;
}