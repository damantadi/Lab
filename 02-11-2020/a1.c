#include<stdio.h>
int main(){
    int i=0;
    while(i<100){
        printf("%d | %d\n",(i+1),(100-i));
        i++;
    }
    return 0;
}