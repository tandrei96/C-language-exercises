#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char vect1[10]={10,20,30,40,50,60,70,80,90,100};
char vect2[10]={0,9,8,7,6,5,4,3,2,1};

char *p1=vect1;
char *p2=vect2;
int i,j=0;
int aux=0;
int main()
{
        while(i<10){

            aux= *p1;
            *p1 = *p2;
            printf(" Elementu vect1[%d] este %d\n",i,vect1[i]);
            *p2 = aux;
            printf(" Elementu vect2[%d] este %d\n",i,vect2[i]);
             p2++;

             p1++;
             i++;

        }
return 0;
}
