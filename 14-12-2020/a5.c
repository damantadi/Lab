#include<stdio.h>
int main(){
    int size;printf("Enter size of character array : ");scanf("%d",&size);
    char string[size];
    printf("Enter value for character array : ");
    scanf(" %[^\n]",string);
    for(int i=0;i<size;i++){
        if(string[i]==' ') printf("\n");
        else printf("%c",string[i]);
    }
    return 0;
}