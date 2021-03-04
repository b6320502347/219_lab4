#include <string.h>
#include <stdio.h>
int main () {
    int i=0;
   char str[1000] ;
   scanf("%[^\n]s",str);
   char *token;
   token = strtok(str," ");
   while( token != NULL ) {
        if(i==0)
        printf("%c",token[0]-32);
        else if(strcmp(token,"i")!=0&&strcmp(token,"of")!=0&&strcmp(token,"the")!=0&&strcmp(token,"on")!=0&&strcmp(token,"at")!=0&&strcmp(token,"for")!=0&&strcmp(token,"with")!=0&&strcmp(token,"a")!=0&&strcmp(token,"an")!=0&&strcmp(token,"and")!=0&&strcmp(token,"in")!=0)
        printf("%c",token[0]-32);
        i++;
      token = strtok(NULL," ");
   }
}
