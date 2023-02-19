#include<stdio.h>
int main(){
    int low,high,size,paginate;printf("Enter the range and size");scanf("%d%d%d",&low,&high,&size);
    paginate=((high-low)/size)+1;
    for(int i=0;i<paginate;i++){
        for(int j=0;j<size;j++){
            if(low>high){
                break;
            }
            printf("%d ",low);
            low++;
        }
        printf("\n");
    }
    return 0;
}