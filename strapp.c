#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void strapp(char *str,...){
    
    va_list args;
    va_start(args,str);
    
    char * str2 = va_arg(args, char *);


    while( str2 != 0 ){

        strcat(str, str2);
        str2 = va_arg(args, char *);
    }
    va_end(args);
}
