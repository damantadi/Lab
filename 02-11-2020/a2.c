#include<stdio.h>
int main(){
    int start,end,i=0;printf("Enter 2 numbers : ");
    scanf("%d%d",&start,&end);
    if(start<end){
        i=start;
        while(i<=end){
            printf("%d ",i);
            i++;
        }
    }
    else{
        i=start;
        while(i>=end){
            printf("%d ",i);
            i--;
        }
    }
    return 0;
}