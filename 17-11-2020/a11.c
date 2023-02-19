#include<stdio.h>
int main(){
    int n;printf("Please enter size : ");scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n-1-i;j>0;j--){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("%d ",(k+1));
        }
        printf("\n");
    }
    return 0;
}