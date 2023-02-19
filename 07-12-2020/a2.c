#include<stdio.h>
int main(){
    int i=1,counter=1;
    next:
        printf("%d ",i);
        i+=counter;counter++;
        if(i<=100) goto next;
    return 0;
}