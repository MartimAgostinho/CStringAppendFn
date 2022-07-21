#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

void strapp(char *str,...);
void inttostr(int n,char *str);
void wait(unsigned int secs);

void wait(unsigned int secs){

    char time[15];

    inttostr(secs, time);
    
    char *cmd = malloc( sizeof(char) * ( strlen(time) + 7) );

    strapp(cmd,"sleep ",time,0);
    system(cmd);
    free(cmd);
}

void inttostr(int n,char *str){

    int num = n;
    int i = 0;

    while( num ){
        
        str[i++] = num % 10 + '0';
        num /= 10;
    }

    char straux[i];
    
    for(int j = 0;j < i;++j){ straux[i - 1 - j] = str[j]; }
    
    straux[i] = '\0';
    strcpy(str, straux);
}

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
