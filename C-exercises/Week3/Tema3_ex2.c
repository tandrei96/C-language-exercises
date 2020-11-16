
/* EXERCITIUL 2 */

#include <stdlib.h>
#include <stdio.h>

int main(){

    int A=0;
    int B=0;
    int C=0;
    printf("valoarea lui A este =");
    scanf("%d",&A);
    printf("valoarea lui B este =");
    scanf("%d",&B);
    printf("valoarea lui C este =");
    scanf("%d",&C);

    if(A>B && A>C){ //Daca  A>B si A>C inseamna ca l printeaza pe A
        printf("Valoarea maxima este al lui A=%d\n", A);
    }
    else {        //puteam sa pun si else if(b>c){} si dupaia la sfarsit else

        if(B>C){ //Daca nu e ca mai sus, dar B>C (automat e mai mare si ca A pt ca primul if e fals, si A<B si A<C) -->deci at this point A<B>C

        printf("valoarea maxima este al lui B=%d\n", B);

        }
        else{  //altfel daca B nu e cel mai mare si A<C(pt ca primul if e fals)
            printf("valoarea maxima este al lui C=%d\n", C);
        }
    }    

    

}

//Q1:Care e diferenta dintre else if si if? 
//R:Am raspuns la curs. Daca ai doar 3 if-uri care verifica 3 conditii diferite, compilatorul ia si ti le verifica pe toate..si din toate tu poti sa ai 2 conditii similare(tu poate vrei sa faci asta dar trebuie sa stii ca vrei asta, ca te astepti sa ai 2 conditii true din 3 if-uri). 
//In schimb, daca pui else if, el ia si verifica conditia din else if si daca e adevarata, acolo ramane,nu mai merge la urmatorul else if/else(daca ultimu e else inseamna ca niciuna din else if-uri nu e true si atunci face ceva in functia aia)
//Else iti face asa : daca nu indeplinesti conditia din if, fa asta. In else, conditia pe care ai zis-o tu la if e falsa(logic), si poti sa te folosesti de asta.

//Q2:Poti sa pui else inainte de else if? //e considerat de compilator ca ultima conditie