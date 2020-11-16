#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char string1[50];
char string2[50];
int i=0;
char string1_aux[50];
char string2_aux[50];

char *ptr1=string1;
char *ptr2=string2;

int main()
{
    printf("Introduceti primul string\n");
    fgets(string1,sizeof(string1),stdin);
    printf("Introduceti Al2lea string\n");
    fgets(string2,sizeof(string2),stdin);

        while(*ptr1!='\0'){
            string1_aux[i]=*ptr1;
            i++;
            ptr1++;
        }

        i=0;
        while(*ptr2!='\0'){
            string2_aux[i]=*ptr2;
            i++;
            ptr2++;
        }
        strcat (string1_aux,string2_aux);
    i=0;
        while(string1_aux[i]!='\0'){
            printf("%c\n",string1_aux[i]);
            i++;
        }
return 0;
}
