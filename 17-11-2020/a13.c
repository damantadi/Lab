#include<stdio.h>
int main(){
    int n;printf("Please enter size : ");scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==0) printf("*\n");
        else if(i==(n-1)){
            for(int j=0;j<=n;j++)
                printf("*");
            printf("\n");
        }
        else{
            printf("*");
            for(int x=0;x<i;x++)
                printf(" ");
            printf("*\n");
        } 
    }
    return 0;
}