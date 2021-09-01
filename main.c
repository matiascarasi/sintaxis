#include <stdio.h>
#include "scanner.h"

int main() {

    enum tokens token;
    char str[256] = {'\0'};

    while ( (token = get_token(str)) != FDT ) {
        switch (token) {
            case CAD:
                printf("Cadena: %s\n", str);
                break;
            case SEP:
                printf("Separador: %s\n", str);
                break;
            default:
                break;
        }
    }
    
    printf("Fin de Texto: %c\n", EOF);
    return 0;
}