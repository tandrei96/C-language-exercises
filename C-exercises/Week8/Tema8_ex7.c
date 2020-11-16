#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char string[20];
char *p=string;
int count=0;
int main()
{
    printf("Type your string\n");
    fgets(string,sizeof(string),stdin);
    while(*p!='\0'){
        count++;
        p++;
    }
    count--;
   printf("The string has %d caracters and occupies %d bytes from memory",count,p-&string[0]);//un char ocupa 1 byte de memorie, de aia n-am mai impartit la 4, ca la int
}
