#include<stdio.h>
#define size 100
#define word_size 100
int main(){
    char string[size],word[word_size];int counter=0,str=0,flag=0,word_flag=0;
    printf("Enter a string : ");scanf("%[^\n]",string);
    while(string[str]!='\0'){
        if((string[str]==' ')&&(flag==0)) {flag=1;continue;}
        if(string[str]!=' ') word_flag=1;
        if((flag==1)&&(string[str]==' ')&&(word_flag==1)) break;
        word[counter++]=string[str];
    }
    printf("2nd word is : %s",string);
    return 0;
}