#include<stdio.h>
int main(){
    int n;printf("Enter size of triangle : ");scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}