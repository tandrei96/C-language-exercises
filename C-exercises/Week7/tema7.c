//Sa se afiseze elementul comun din 2 stringuri

//Ana are mere
//Andrei pere are

// #include<stdio.h>
// int main()
// {
//  int arr[] = {10, 20, 30, 40, 50, 60};
//  int *ptr1 = arr;
//  int *ptr2 = arr + 5;
//  printf("Number of elements between two pointer are: %ld.",(ptr2 - ptr1));
//  printf("Number of bytes between two pointers are: %ld",*ptr2 -*ptr1);
//  return 0;
// }/
#include <stdio.h>
#include <string.h>

char string1[20],string2[20];
char string1_aux[][20];
char string2_aux [][20];

int main(){
	int i,i1=0;//cunivi
	int j=0;

    printf("Introduceti primul string\n");
    fgets(string1, sizeof(string1),stdin);
    printf("Introduceti al2lea string\n");
    fgets(string2, sizeof(string2),stdin);

	// mergi prin tot stringul pana dai de final cu ajutorul lui  i
    while(string1[i]!='\0'){

		//daca ai dat de spatiu , inseamna ca sa incheiat un cuvant deci vei incrementa i1, pentru a
		//crea un nou element in matrice, treci de la a[0][j] la a[1][j], etc, si totodata trebuie sa o
		// iei de la capat cu j, pt ca urmeaza un nou cuvant
        if(string1[i]==' '){
            i1++;
            j=0;
        }
        else
			//daca nu este inca spatiu, stocheaza literea cu litera in matrice
        {
           string1_aux[i1][j]=string1[i];
           j++;
        }

        i++;

    }
    i=0;
    j=0;
    i1=0;
    while(string2[i]!='\0'){

		//daca ai dat de spatiu , inseamna ca sa incheiat un cuvant deci vei incrementa i1, pentru a
		//crea un nou element in matrice, treci de la a[0][j] la a[1][j], etc, si totodata trebuie sa o
		// iei de la capat cu j, pt ca urmeaza un nou cuvant
        if(string2[i]==' '){
            i1++;
            j=0;
        }
        else
			//daca nu este inca spatiu, stocheaza literea cu litera in matrice
        {
           string2_aux[i1][j]=string2[i];
           j++;
        }

        i++;

    }

    i=0;
    j=0;
    i1=0;
    // for(i=0;i<=i1;i++){
    //     while(string1_aux[i][j]!='\0'){
    //             if(string1_aux[i][j]== string2_aux[i][j]){
    //                 printf("%c",string1_aux[i][j]);
    //             }
    //             else{
    //                 j=0;
    //             }

    //         j++;
    //         printf("\n");
    //     }
    //     i++;
    // }

	//aici doar am vrut sa afisez matricea sa ma asigur ca stochez bine
    printf("%d \n",i1);
    for (i=0;i<=i1;i++)
    {
        j=0;

        while(string2_aux[i][j]!= '\0')
        {
            printf("%c \n",string2_aux[i][j]);
            j++;
        }
    }

return 0;

}

