#include<stdio.h>

int fact(int a){
    int val = 1;
    if(a==0){
        return 1;
    }
    else{
        while(a>0){
            val = val *a;
            a--;
            
        }
    }
    return val;
}
void main()
{
    int n=5;
    int val,a,b,c;
    for(int i=0;i<=n;++i){
        for(int j=i;j<n;++j){
            printf(" ");
        }
        for(int j=0;j<=i;++j){
            a = fact(i);
            b = fact(j);
            c = i-j;
            c = fact(c);
            val = a/(b*c);
            printf("%d ",val);

        }
        printf("\n");
    }
}