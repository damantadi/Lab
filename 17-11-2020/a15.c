#include<stdio.h>
int main(){
    int n;printf("Please enter size : ");scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("1 ");
        }
        printf("\n");
    }
    for(int y=0;y<=n;y++)
        printf("1 ");
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf(" ");
        }
        for(int k=(n-i-1);k>=0;k--){
            printf("1 ");
        }
        printf("\n");
    }
    return 0;
}