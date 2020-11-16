/*EXERCITIUL 1 

int A=128;
charB=127;
intC=0;
C= ++B+A; 

    1.++B = -128 
    2.integer promotion pt B(mi-l face in int)
    3.-128+128=0
    4.C=0 (nu mai trb trunchiere)

int A=128;
charB=127;
intC=0;
C= (int)++B+A; 

    1.++B = -128
    2.cast la B = -128 (dar acum e int)
    3.nu mai fac integer promotion ca toate is int
    4.-128+128=0
    5.C=0;

int A=128;
charB=127;
intC=0;
C= B+(char)A; 

    1.(char)A=-128
    2.nu mai fac integer promotion ca toate is char
    3.127+ (-128)=-1
    4.fac trunchiere la int a rezultatului de tip char
    5.C=-1 e de tip int

*/

/*Ex2*///Find number of days in a month. Read the month value, and print the total number of days

#include <stdio.h>
#include <stdlib.h>
enum luni_an
{ianurie=1,
februarie,
martie,
aprilie,
mai,
iunie,
iulie,
august,
septembrie,
octombrie,
noiembrie,
decembrie
};
    enum an{an_2018=2018,an_2019,an_2020};

int main(){
    
    int an;
    int luna;
    printf("Introduceti anul:");
    scanf("%d",&an);
    printf("Introduceti luna dorita");
    scanf("%d",&luna);
    if((an>=an_2018) && (an<=an_2020)){

    switch(luna){
        case ianurie:
        case martie:
        case mai:
        case iulie:
        case august:
        case octombrie:
        case decembrie:
            printf("Luna mentionata are 31 de zile");
        break;

        case aprilie:
        case iunie:
        case septembrie:
        case noiembrie:
            printf("Luna mentionata are 30 de zile");

        case februarie:
            switch (an){
                case 2018:
                case 2019:
                    printf("Luna are 28 de zile");
                break;
            
                default:
                    printf("Luna are 29 de zile");
                break;
            }
        break;
        default:
            printf("Luna mentionata nu exista");
        break;
    }

    }else{
        printf("Nu se poate afisa numarul de zile din luna pentru anul respectiv");
    }
    return 0;
}


