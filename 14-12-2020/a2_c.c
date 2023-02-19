#include<stdio.h>
int main(){
    int size;printf("Enter the size for the character array : ");scanf("%d",&size);
    char string[size];
    printf("Enter string : ");scanf(" %[^\n]",string);
    for(int i=size-1;i>=0;i--){
        for(char *j=(string+i);j>=string;j--){
            printf("%c",*j);
        }
        printf("\n");
    }
    return 0;
}