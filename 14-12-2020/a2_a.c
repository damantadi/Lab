#include<stdio.h>
int main(){
    int size;printf("Enter the size for the character array : ");scanf("%d",&size);
    char string[size];
    printf("Enter string : ");scanf(" %[^\n]",string);
    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++) printf(" ");
        printf("%s\n",(string+i));
    }
    return 0;
}