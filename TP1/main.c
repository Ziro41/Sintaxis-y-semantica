#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"

int main(){

 
 int c;
    TOKEN token_leido;
    do
    {   
        
        token_leido = get_token();
        
        switch (token_leido)
        {
        case CAD: printf("Cadena: ");
        

        c = getchar();
        
        while (!isspace(c)&& c!=','){
            printf("%c",c);
            c = getchar();}
        ungetc(c,stdin);
        printf("\n ");
        
        break;
        case SEP: printf("\nSeparador: ,\n");
        
       
        break;
        case FDT: printf("Fin de texto:\n");
        break;
    
        }
       
    } while (token_leido != FDT);
    
    
    return 0;
}
