#include<stdio.h>
int main(){
    int n;printf("Enter size of triangle : ");scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int space=(n-row);space>0;space--){
            printf(" ");
        }
        for(int star=0;star<row;star++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}