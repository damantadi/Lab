#include<stdio.h>
void pattern(int size){
    for(int i=size-1;i>=0;i--){
        for(int j=i;j>=0;j--)
            printf("* ");
        printf("\n");
    }
}
int main(){
    int size;printf("Enter pattern size : ");scanf("%d",&size);
    pattern(size);
    return 0;
}