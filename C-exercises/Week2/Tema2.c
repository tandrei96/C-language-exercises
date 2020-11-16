#include <stdio.h>
#include <stdlib.h>

struct puncte_triunghi{
    int x;
    int y;
    int z;

};

    struct triunghi{
        int latura1;

        int latura2;
    
        int latura3;
    
        int arie;
    
        struct puncte_triunghi punct1; //declar un element al structurii triunghi. Acestui element i-am atribuit o variabila "punct1" care este de tipul tipului de data(structura) "puncte_triunghi". Asadar, variabilei acesteia punct1 ii pot atribui elementele din interiorul structurii punte_triunghi.

        //Adica gen eu aici am vrut sa declar o variabila punct1 care nu vreau sa fie atribuita unui tip de data ca int,char,etc, ci vreau ca variabila mea "punct1" sa fie de tipul de data struct "puncte_triunghi" definita mai sus. Astfel, mai incolo in cod eu cu variabila asta o sa ma pot folosi de elementele din interiorul struturii "puncte_triunghi"
        //Daca nu puneam punct1, nu ar fi avut logica pt ca era ca si cum as fi scris "int;"
    
        struct puncte_triunghi punct2;
    
        struct puncte_triunghi punct3;   //am declarat 3 variabile de tipul structurii puncte_triunghi. Cu ajutorul lor vom putea avea acces la elementele din interiorul structurii puncte_triunghi;

    };

        enum componente_triunghi{
            cateta1=15,
    
            cateta2=20,
        
            ipotenuza

        };

            int main (){
                
                struct triunghi elementgeometric; //variabila de tipul structurii triunghi
                
                elementgeometric.punct1.x=3; 
                
                elementgeometric.punct2.y=4;
                
                elementgeometric.punct3.z=5; //pot sa initializez pentru variabila punct1 elementele x, y, z.Eu am pus doar x pt punct1, y pentru punct2 si z pentru punct3
                
                elementgeometric.latura1=cateta1; //daca eu nu initializam latura1 din variabila elementgeometric cu valoarea asociata"cateta1" din enum, compilatorul imi atribuia automat valoarea 0.
                
                elementgeometric.latura2=cateta2;
                
                elementgeometric.latura3=ipotenuza;

                printf("Valorile punctelor triunghiului sunt x:%d y:%d z:%d \n", elementgeometric.punct1.x,elementgeometric.punct2.y,elementgeometric.punct3.z);

                printf("Valorile laturilor triunghiului sunt latura1:%d latura2:%d latura3:%d \n", elementgeometric.latura1,elementgeometric.latura2,elementgeometric.latura3);

                }