#include <stdio.h>
#include <ctype.h>

void get_token() {
   int c;
   int i = 0;
   char str[100] = {'\0'};
   
   while ((c = getchar()) != EOF){
      if( isspace(c) ) {
         if(str[0] != '\0'){
            printf("Cadena de texto: %s\n", str);
            i = 0;
            str[0] = '\0';
         }
      } else if( c == ',' ) {
         if(str[0] != '\0'){
            printf("Cadena de texto: %s\n", str);
            i = 0;
            str[0] = '\0';
         }
         printf("Separador: %c\n", c);
      } else {
         str[i] = c;
         str[i+1] = '\0';
         i++;
      }
   }
   if(str[0] != '\0'){
      printf("Cadena de texto: %s\n", str);
      i = 0;
      str[0] = '\0';
   }
   printf("Fin de Texto: %c", c);
}

int main() {
   get_token();
   return 0;
}