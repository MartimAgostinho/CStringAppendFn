#include <string.h>

void intostr(int n,char *str);

void intostr(int n,char *str){

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
