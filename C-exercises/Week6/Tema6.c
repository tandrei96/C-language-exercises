#include <stdio.h>
#include <stdlib.h>


/*Exercitiul 1*/



// unsigned int vector[10]={1,2,4,6,10,42,13,47,99,100};
// int aux=0,i=0,j=0;
// int main(){
// aux=vector[0]; 
//     for(i=0;i<10;i++)
//         for(j=i+1;j<10;j++){
                //verific ca valoarea mea actuala sa fie mai mica decat orice alt numar din array ca sa o mut >> spre dreapta o poz 

//             if(vector[i]<vector[j]){
//                 //in aux stochez val lui i, adica 1 prima data
                
//                 aux = vector[i];
//                 vector[i]=vector[j];
//                 vector [j]=aux;
                
//             }

//         }
//         printf("Ordonarea elementelor vectorului in ordine descrescatoare este\n");

//     for(i=0;i<10;i++){
//         printf("%d\n",vector[i]);
//     }
// }



/*    Exercitiul  2   */ //PROBLEM
//nush dc nu mi afiseaza linia 0 coloana 0


// int matrice1[4][4]={
// {1,2,3,4},
// {5,6,7,8},
// {9,2,1,4},
// {1,4,2,3}
// };
// int i=0,j=0;
// int main(){
//     //citesc numarul de linii i si numarul de coloane j
//     for (i=0;i<4;i++){
        
//         for(j=0;j<4;j++){
//             //observ ca elementele de pe diagonala principala au proprietatea ca sunt la acelasi nr de linie si de coloana
//             if (i==j){ // E CONDITIE 

//                 printf("Elementele de pe diagonala principala sunt %d\n",matrice1[i][j]);
//             }

            
//         }
//     }
//     j=2;
//     for(i=0;i<=3;i++){
//         printf("elementele de pe penultima coloana sunt %d\n",matrice1[i][j]);
       
//     }

// }

 
  /*   Exercitiul 3 */

// unsigned char matrice1[4][4]={
// {1,2,3,4},
// {5,6,0,8},
// {9,2,1,4},
// {1,4,2,3}
// };

// int i=0,j=0,k=0;
 
// int main(){
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             //aici zicem da vreun element din matricea
//             if(matrice1[i][j]==0){
//                 matrice1[i][j]=0xff;
//             }

//         }

//     }


//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             printf("[%d][%d] este %d ",i,j,matrice1[i][j]);
//         }
//         printf("\n");
//     }
//     // for(i=0;i<4;i++)
    
// }


/* EXERCITIUL 4 */

// int matrice[2][2]={

// {1,5},
// {9,15}

// };
// //conditia din for-uri poate fi inlocuita cu variabila<n,  iar int matrice[n][2] 
// int i=0,j=0,k=2,z=1;
// int main(){
    //coloana 1 pentru transf in numere pare
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             //cu break si conditia aia care o sa fie mereu adevarata practic blochez coloana sa iasa mereu la j=0, si mereu incrementez i-ul rescriu valoarea de pe coloana 0 cu ce vreau si tot asa, pana mi se termina conditia de la for-ul pentru i
//             if(j<2){
//             matrice[i][j]=k;
//             break;
//             }

//         }
//         k+=2;
//     }
//     //coloana 2 pentru transf in numerele impare
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){

//             if(j==1){
//             matrice[i][j]=z;
//             break;
//             }

//         }
//         z+=2; //putem sa refolosim k-ul si reintiem variabila inainte de for cu 1
//     }

//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             //afisam noua matrice
//             printf("%d\n",matrice[i][j]);

            
//         }
        
//     }
    

// }


/* EXERCITIUL 5 */ //-->Nu am reusit sa-l reproduc


/* QuickSort-> se alege practic un pivot (un numar) din sirul de elem din vector iar pe baza lui se va face pivotare. In dreapta se vor stoca cele mai mari elemente si instanga cele mai mici...asta nu inseamna ca o sa fie si in ordine, ci doar pivotul nostru o sa fie in locul potrivit.

Daca ai 10 nr 
1 4 5 9 8 10 7 6 3 2 
Pivotul e 7 si se compara cu 2. 7>2? Da, deci facem pivotare
1 4 5 9 8 10 2 6 3 7
Se numara de la celalalt capat acu. 7>1?Da 7>4? >5? >9?Nu, se face pivotare
1 4 5 7 8 10 2 6 3 9
Acu se numara de la celalalt capat. 7>3? Da, se face pivotare

1 4 5 3 8 10 2 6 7 9
La fel, 7 mai mare ca 1?ca 4? ca 5? ca 3 ca 8?Nu, facem pivotare
1 4 5 3 7 10 2 6 8 9 

7>6, da

1 4 5 3 6 10 2 7 8 9

7>10 nu

1 4 5 3 6 7 2 10 8 9 

7>2 da

1 4 5 3 6 2 7 10 8 9 -->rezultatul? 7 e pe pozitia buna, chiar daca cifrele nu sunt in ordine

*/

// int vector[10]={1,4,5,9,8,10,7,6,3,2};
// int aux=0,i=0,j=0,pivot=7;
// int main(){
//     aux=vector[0];

//     for(i=0;i<10;i++){
//         for(j=0;j<7;j++){
    
//                if(vector[j]>7){
//                    aux=vector[j];
//                    vector[j]=7;
//                    j++;
//                    break;
//                }

//           if(vector[j]==7){
//               vector [j]=aux;
//           }

//         }
           
//     }



//     for(i=0;i<10;i++){
//         printf("%d\n",vector[i]);
//     }

// }


/* EXERCITIUL 6 */

// char my_array[6]={1,3,52,'z','a',65};
// int i=0;
// void main(){
//     for(i=0;i<6;i++){
//         if(my_array[i]=='z'){
//             printf("S-a gasit litera %c la elementul my_array[%d]",my_array[i],i);
//         }
//     }
    
// }

