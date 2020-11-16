#include <stdio.h>
#include <stdlib.h>


/*Exercitiul 1*/



// int i=0;

// int media=0;


// int n=0;
// /*imi da eroare aici, la printf si scanf dar nu stiu dc*/
// printf("Introduceti de la tastatura numarul pana la cat se va face operatie aritmetica");
// scanf("%d",&n) ;



// int main(){

//     for(i=0;i<=n;i++){
//         //incrementez i ul
        
//         media+=i;
//     }
//     media /=n;
//     printf("media primelor %d este %d \n",n,media);

//     i=0;
//     media=0;
//     while(i<=n){
//         media+=i;
//         i++;
//     }
//     media/=n;
//     printf("media primelor %d este %d \n",n,media);
// }

/*Exercitiul 2*/

// #include <stdio.h>
// #include <stdlib.h>


// int numar=19;
// int produs;
// int i=0;
// unsigned int n=5;
// /*aceeasi problema ca la ex 1..nu pot sa folosesc scanf si printf*/
// // printf("Introduceti pana la ce valoare vreti sa afisati tabelul ");
// // scanf("%u",&n);

// int main(){
// printf("Tabelul inmultirii pana la numarul specificat este\n");
//     for(i=1;i<=n;i++){

//         if(i<=n){
//            produs= numar*i;
//            printf("19x%i=%d\n",i,produs);
//         }
//     }

// }

/*Exercitiul 3*/
    
//Ex tema5, ex3 primele nr prime
// int nr=0;
// int i=0;
// int j=0;
// char ind=0;
// int main(){
//     printf("Primele cate numere doriti sa fie afisate?");
//     scanf("%d",&nr);
//     //cu primul for numar primele 10 cifre prime
//     for(i=1;i<nr*2;i++){
//         //declar nr prim cu 1 pt ca 1 este nr prim
//         int nr_prim=1;
//         //al 2 lea for il fac ca sa compar de la 2 pana la numarul meu daca se imparte cu vreun numar. Ex 13%2==0? %3 %4 etc... pana ajunge la 13%12==0?
//         for(j=2;j<i;j++){
//                //daca se restul impartirii la vreun numar precedent (incepand de la 2) este 0, at nu e prim si initializez o variabila de care sa stiu ca daca e 0 inseamna ca nr nu e prim     
//         if((i%j)==0 ){
           
//             //nr nu e prim
//             nr_prim=0;
//             //ii dau break pt ca daca a gasit o variabila cu care se imparte, sa nu mi mai verifice in continuare, ci sa mi iasa din for, si sa-mi incrementeze i-ul ca sa l verifice dupaia pe urmatorul
//             break;
//         }
        
//     }
    
//     if(nr_prim==1){
//             printf("Nr prim este %d\n",i);
//             ind++;
//         }
    

// }

// }

/* Ex4-afisati:
1
12
123
1234
....
1234...n
*/
// int nr=0;
// int i=0,j=1;
// int m=1;
// int main(){
//     printf("Introduceti nr\n");
//     scanf("%d",&nr);
//     /*initializand o data i-ul din for cu 0 si dupaia in al2lea for il initializez cu 1 practic il blochez pe primul for sa-mi afiseze doar 1(val lui i din primu-ul for, si nu-mi iese niciodata). Apoi la val asta, cu al2lea for practic mereu egalez numarul meu i cu m si astfel afisez numerele in continuare .fac asta pana cand i-ul meu devine 11 si nu mai verifica prim ul for si astfel imi iese cand trb */
//     for(i=0;i<=nr;i++){
//         for(j=1;j<m;j++){
//             printf("%d",j);
            
            
//         }
//         m++;
//         printf("\n");
        
//     }
// }

//Ex 5

int nr_linii=3;
int i=0,j=0,k=0;
int m=1;
int space=1;
unsigned char c=' ';

int main(){
    printf("Cate linii introduceti?\n");
    scanf("%d",&nr_linii);
        //citim liniile
    for(i=0;i<nr_linii;i++){

     //spatiile
     for(k=0;k<(nr_linii-i);k++){//adica pt i=0 imi intra in bucla asta si imi face 8 spatii la i=0, incrementeaza k-ul la 1 si trece la urmatorul for care imi afiseaza stelutele, dupa pt i=1, k=1 si imi face 7 spatii, si tot asa
                printf("%c",c);
     }
     //scriem regulile specifice pt linii->stelutele
        for(j=0;j<m;j++){
            //j il folosesc ca sa imi fac anumite reguli pe linie
            
         printf("*");
         
            
            
        }
        m+=2;
        
        
        printf("\n");
       
    }   
}


//Ex6 - operatie aritmetica
// int i=0,j=2;
// int numere=3;
// float val_preced=0;
// float valoare=0;
// int main(){
//     //citim numerele 1,2,3,...n
//     for(i=1;i<=numere;i++){
//         //val preced o sa stocheze 1/1+ 1/1+1/2+ ....+1/3 samd
//         val_preced+=(float)1/i;
//         printf("%f\n",val_preced);
    
//     }
//     //decrementam i-ul pt ca operatie armonica e N/(1/a1)+...(1/an) iar noi pana aici avem N+1 din for-ul de mai sus
//     i--;
//     //formula pt calc sumei armonice
//     valoare=i/val_preced;

//     printf("%f\n",valoare);
// }

//Ex7--simulare de calculator

// char d=0,operatie=0;
// int nr1=0,nr2=0;
// int main(){

    
//     while(1){
    
//         printf("Doriti sa efectuati urmatorul calcul?\t Introdu d pentru DA sau e pentru EXIT\n");
//         scanf(" %c",&d); //raspuns
//         if(d=='e'){
//             break;
//         }
     

//         else if(d=='d'|| (d=='D')){
               

//              printf("Doriti sa efectuati suma sau diferenta numerelor\n\ts-->pentru suma d-->pentru diferenta\n");
//              scanf(" %c",&operatie);
//                 //aici se impute treaba si nu stiu dc...
//                 //verificam daca utilizatorul a apasat suma sau diferenta si facem operatia accordingly.
//                 //Orice operatie am face iesim din while-ul asta si din while-ul de mai sus de la linia 205 ca sa-mi puna dinou ambele intrebari(ca poate ma razgandec si vreau sa ies din program)

//              printf("Introduceti 2 numere de la tastatura\n");
//              scanf("%d",&nr1);
//              scanf("%d",&nr2);
             
//                              if((operatie=='s') ||(operatie=='S')){
//                              printf("Suma cifrelor este  %d\n",nr1+nr2);
                            
//                             }
//                             else if((operatie=='d') && (nr1>=nr2)){
//                                 printf("Diferenta este %d\n",nr1-nr2);
                                
//                             }
//                             else if((operatie=='d')){
//                                 printf("Diferenta este %d\n",nr2-nr1);
                            
//                         //cu if-ul asta ies din al2lea while
//             }

//         }
//         else{
//             printf("Mesaj necunoscut");
            
//         }
                    

//     }

// }
//Nu-mi afiseaza diferenta si nu stiu dc...

