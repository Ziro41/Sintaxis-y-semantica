#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include <stdio.h>
#include <ctype.h>      
#include <stdbool.h> 

typedef enum
{
    FDT, 
    SEP, 
    CAD,
    ESP
} TOKEN;

TOKEN get_token();

#endif
