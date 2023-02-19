#include<stdio.h>
int main(){
    int i=200;
    while(i<3000){
        if(i%3==0&&i%8==0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}