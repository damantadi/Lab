#include<stdio.h>
int main(){
    int size;printf("Enter the size for the character array : ");scanf("%d",&size);
    char string[size];
    printf("Enter string : ");scanf(" %[^\n]",string);
    for(int i=size-1;i>=0;i--){
        printf("%s\n",(string+i));
    }
    return 0;
}