#include<stdio.h>
int main(){
    int n;n=15;
    for(int i=1;i<=5;i++){
        for(int j=0;j<(5-i+1);j++){
            printf("%d ",n);
            n--;
        }
        printf("\n");
    }
    return 0;
}