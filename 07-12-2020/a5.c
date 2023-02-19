#include<stdio.h>
int main(){
    char s1[100],s2[100];
    printf("Enter string 1 : ");scanf("%[^\n]",s1);
    printf("Enter string 2 : ");scanf(" %[^\n]",s2);
    int choice;
    printf("Choose an option : \n1. Copy string 1 into string 2\n2. Concatenate string 1 and 2\n3. Calculate length of both strings\n4. Compare both strings\nYour choice : ");
    scanf("%d",&choice);
    if(choice==1){
        int i=0;
        while(s1[i]!='\0'){
            s2[i]=s1[i];i++;
        }
        s2[i]='\0';
        printf("String 1 : %s\n",s1);printf("String 2 : %s",s2);
    }
    else if(choice==2){
        char con[200];int i=0;
        while(s1[i]!='\0'){
            con[i]=s1[i];i++;
        }
        int j=0;
        while(s2[j]!='\0'){
            con[i]=s2[j];j++;i++;
        }
        con[i]='\0';
        printf("Concatenated string is : %s",con);
    }
    else if(choice==3){
        int counter=0,i=0;
        while(s1[i]!='\0') {counter++;i++;}
        printf("Length of string 1 : %d\n",counter);
        counter=0;i=0;
        while(s2[i]!='\0') {counter++;i++;}
        printf("Length of string 2 : %d",counter);
    }
    else if(choice==4){
        int counter=0,i=0,flag=0;
        while(s1[i]!='\0') {counter++;i++;}
        int len1=counter;
        counter=0;i=0;
        while(s2[i]!='\0') {counter++;i++;}
        int len2=counter;
        if(len1==len2){
            int k=0;
            while(s1[k]!='\0'){
                if(s1[k]!=s2[k]){
                    flag=1;break;
                }
                k++;
            }        
        }
        if(flag==1) printf("The strings are not identical"); else printf("The strings are identical");
    }
    return 0;
}