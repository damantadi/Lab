#include<stdio.h>
int main(){
    int n,num;printf("Enter aize and number : ");scanf("%d%d",&n,&num);
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%d",num);
        }
        printf("\n");
    }
    return 0;
}