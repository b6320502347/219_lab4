#include<stdio.h>
int main(){
char key[200],i;
scanf("%s",key);
for(i=0;i<200;i++)
    if(key[i]!='\0'){
        if(i==0)
            printf("%c",key[i]);
        else if(key[i]!=key[i-1])
            printf("%c",key[i]);
            }
    else break;
    }

