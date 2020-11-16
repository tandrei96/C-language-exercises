#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



//////////////////////////////write a inline funct that calculate area of a square\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//


// int area_calc(int x){

//     return (x*x);
// }

// int main(){

//     printf("Square area of your number is %d",area_calc(5));
// }



////////////////////////Write a program that adds 2 integers////////////////////////////////////

//nu returnez nimic dar modific valoarea string
// void AddInteger(char* x, char* y,char* str){

//     //str=string[0];
//     do{
//         *str=*x;
//         x++;
//         str++;
//         if(*x=='\0'){
//             while((*y)!='\0'){
//                 *str=*y;
//                 y++;
//                 str++;
//             }
//         }
//     }while((*x)!='\0');
    
// }

// int main(){
//     int i=0;
//     char string[50];
//     char Str1 []="Ana are";
//     char Str2 [] ="mere";

//     AddInteger(Str1,Str2,string);
//     for(i=0;string[i]!='\0';i++){
//         printf("%c",string[i]);

//     }
// }


////////////////////////Write a program that returns 4 parameters////////////////////////////////////



// void function (int* P1, int* P2, int* P3, int* P4){
//     *P1=3;
//     *P2=4;
//     *P3=5;
//     *P4=6;

// }

// int main(){
//     int c=0;
//     int d=0;
//     int e=0;
//     int f=0;
//     function(&c,&d,&e,&f);
//     printf("valorile modificate sunt %d\n%d\n%d\n%d",c,d,e,f);

// }

////////////////////////American roulette->Write a program that input a number,a sum of money, and spins a roulette and checks if the number is a match, It increments the sum in case of a match, and drecrements otherwise////////////////////


//shuffle intre 0 si 38 un array
//user_input
//check -->check if user input e egal cu nr de la shuffle
//if match, increment sum, otherwise decrement sum
// int count=1000;

// int ruleta[37]={0};
// int i=0;
// void shuffle()
// {
//     time_t t;
//     int* P_i=&i;

//          /* Intializes random number generator */
//    srand((unsigned) time(&t));

//    /* Print 5 random numbers from 0 to 50 */
//        *P_i=(rand() %37);
//     //    printf("%d",i);
  
// }

// void functie_input(int*ptr) //ptr=&user_input
// {
//     printf("Introduceti inputul dvs, respectiv un numar de la 0 la 36\n");
//     scanf("%d",ptr);
// }

// void check_result(int x,int* ShuffleVal){
//     if (x==*ShuffleVal){
//         printf("Ati ghicit!\n");
//         count+=10;
//     }
//     else{
//         printf("Nu ati ghicit!\n");
//         count-=10;
//     }

// }

// int main(){
//    int user_input=0;
       
//         while(user_input!=100){
    
//              shuffle();
    
//              functie_input(&user_input);
    
//              check_result (user_input,&i);
    
//             // check if guess value e pe 0;
    
//             printf("\t\tSuma actuala este de euro %d\n",count);
//         }

// }


/////////////////////////////////////Write a function that inserts a given character into a string at a given position