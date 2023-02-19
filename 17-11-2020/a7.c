#include<stdio.h>
int main(){
    int n;printf("Enter number of lines : ");scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
        for(int j=0;j<i;j++){
            printf("1");
        }
        printf("\n");
        for(int k=0;k<(i+1);k++){
            printf("%d",(k+1));
        }
        printf("\n");
    }
    return 0;
}