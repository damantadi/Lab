#include<stdio.h>
int main(){
    int n;printf("Enter size of triangle : ");scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%d",(j+1));
        }
        printf("\n");
    }
    return 0;
}