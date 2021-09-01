#include <stdio.h>
#include <ctype.h>
#include "scanner.h"

enum tokens get_token(char str[]){
   char c;
   int i = 0;
   
   while((c = getchar()) != EOF){
      if ( isspace(c) ) {
         if (i != 0) {
            str[i] = '\0';
            return CAD;
         }
      } else if (c == ',') {
         if (i != 0) {
            str[i] = '\0';
            ungetc(c, stdin);
            return CAD;
         }
         str[0] = c;
         str[1] = '\0';
         return SEP;
      } else {
         str[i] = c;
         i++;
      }
   }
   if (i != 0) {
      str[i] = '\0';
      ungetc(c, stdin);
      return CAD;
   }
   return FDT;
}