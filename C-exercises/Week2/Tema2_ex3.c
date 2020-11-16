#include <stdio.h>
#include <stdlib.h>
#include "header1.h"
#include "header2.h"

 int produs;
 //int produs = my_char * my_int;
 //Nu am putut sa imi declar variabila produs de tip int si sa o si initializez cu valoarea dorita de mine inafara functiei main. De ce? Imi spune ca expression must have a constant value.
 


int main()
{
    int hexa=255;

    float my_float=3.412345;

    produs=my_char*my_int;

    printf("Produsul celor 2 variabile din interiorul header1 & header 2 este %d \n",produs);//ex.3

    printf("Variabila my_float cu 3 cifre dupa virgula este %.3f \n",my_float); //ex.4

    printf("Variabila hexa afisata in hexadecimal este 0x%X\n", hexa); //ex.5
    ceva=3;

}
void functie(){
    int ceva;
}
