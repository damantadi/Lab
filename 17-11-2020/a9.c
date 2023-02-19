#include<stdio.h>
int main(){
    int n;n=15;
    for(int i=0;i<5;i++){
        if(i%2==0){
            for(int j=0;j<(5-i);j++){
                printf("%d ",n);n--;
            }
            printf("\n");
        }     
        else{
            n-=(5-i-1);
            int copy=n-1;
            for(int k=0;k<(5-i);k++){
                printf("%d ",n);n++;
            }
            n=copy;printf("\n");
        }
    }
    return 0;
}