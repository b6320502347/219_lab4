#include<stdio.h>
int main(){
char key[200],i;
gets(key);
for(i=0;i<200;i++){
    if(i==0){
    printf("%c\n",key[i]);
    }
    else if(key[i]!=key[i-1]){
        printf("%c\n",key[i]);
        }
    }
}
