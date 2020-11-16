
/* EXERCITIUL 3 */

#include <stdlib.h>
#include <stdio.h>

int main(){
// char A=getc(stdin); //e o functie specifica pentru ca

    int A;//numar 5 cifre 13520 sau 11121
        
    printf("Introduceti de la tastatura un numar de 5 cifre:");
    scanf("%d",&A);
    int C=(A/10)%10; //cifra a4a
    int D=(A/100)%10; //cifra a3a
// // imi dadea eroare initial pentru ca initial intializasem valorile lui C si D inainte de scanf. Acum, declar variabila in care o sa se stocheze numarul de la tastatura, si dupa ce citesc numarul de la tastatura, fac operatii cu numarul ala, pentru ca altfel eu declar variabila A si compilatorul ii atribuie valoarea 0,da? Eh dupa daca ma apuc sa initializarile de variabila C si D, eu le fac in functie de A, dar A-ul meu nu e inca valoarea lui scanf, ci e aia data automat de compilator, adica 0. DUpa ce faci tu calculele astea proaste pt c si D, valoarea lui A mi-o salveaza bine scanf-ul, si in functia if imi da corect...ma arunca la sfarsit nu pe else, doar ca valoarile lui C si D sunt proaste...si sunt proaste daca le declar inainte de scanf, adica INAINTE SA II ASIGNEZI LUI A VALOAREA DE LA TASTATURA SI DUPA SA FACI CE CALCULE VREI CU EA.
    if (A%10==0){ //cifra a5a a%10
        printf(" Numarul introdus este %d\n", A);
    }
    else{
        
            if( ((C%2)==0) && (C>D) ){
                printf("Suma ultimelor cifre inmultita cu 4 este =%d\n",((C+D)*4));
            }
        
    }

    printf("A treia cifra incrementata este %d\n",++D);
    printf("A patra cifra decrementata este %d\n",--C);
                if( ((A/1000)%10) >0 ){
                printf("Valoarea calculului (Cifra1*Cifra3noua - Cifra4veche)/Cifra2, respectiv (%d*%d-%d)/%d este %d\n", (A/10000), D, ++C, (A/1000)%10, ((((A/10000)*D)-(C)) / ((A/1000)%10)) ) ; //facusem greseala ca am incrementat de 2 ori ++c, odata ca sa afisez intre ghilimele calculul(argumentul dupa a3a virgula), si odata si in calculul p-zis, adica ultima ecuatie dupa ultima virgula. El defapt imi incrementa C-ul de la a3a virgula in toata ecuatia precedenta, si in continuare. Eu daca mai puneam o data in urmatoarea ecuatie, adica dupa ultima virgula dinou ++c el imi modifica valoarea de la a3a virgula,si intre ghilimele valoarea lui [...]-%d, si in continuare eu mergeam cu valoarea de 3 pt c...pt ca incrementasem de 2 ori
                }
                else{
                    printf("Numarul tinde la infinit \n");
                }
    

}

