#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "scanner.h"


int c;
TOKEN get_token()
{ 
do
c = getchar();
while (isspace(c));




if(c == EOF) return FDT;
else if (c == ',') return SEP;
    else { ungetc(c,stdin); return CAD;}


}


 
   
