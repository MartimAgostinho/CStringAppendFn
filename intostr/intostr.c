#include <string.h>

void intostr(int n,char *str);

void intostr(int n,char *str){

    int num = n;
    int i = 0;

    num *= n < 0 ? -1 : 1; //making num a positive number

    while( num ){
        
        str[i++] = num % 10 + '0';//digit to number
        num /= 10;
    }

    if( n < 0 ){ str[i++] = '-'; }//adding a minus
    char straux[i];

    for(int j = 0;j < i;++j){ straux[i - 1 - j] = str[j]; }

    straux[i] = '\0';
    strcpy(str, straux);
}
