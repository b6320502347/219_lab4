#include <string.h>
#include <stdio.h>

int main () {
   char str[1000] ;
   gets(str);
   char *token;
   token = strtok(str," ");
   while( token != NULL ) {
        printf("%c",token[0]-32);
      token = strtok(NULL," ");
   }

   return(0);
}
