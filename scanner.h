void printCadena(char *str, int *i){
   if(str[0] != '\0'){
      printf("Cadena de texto: %s\n", str);
      *i = 0;
      str[0] = '\0';
   }
}

void get_token() {
   int c;
   int i = 0;
   char str[100] = {'\0'};
   while ((c = getchar()) != EOF){
      if( isspace(c) ) {
         printCadena(str, &i);
      } else if( c == ',' ) {
         printCadena(str, &i);
         printf("Separador: %c\n", c);
      } else {
         str[i] = c;
         str[i+1] = '\0';
         i++;
      }
   }
   printCadena(str, &i);
   printf("Fin de Texto: %c", c);
}