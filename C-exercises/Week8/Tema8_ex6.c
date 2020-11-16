#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_array[10];
int *ptr1=my_array;
int *ptr2=NULL;
int a,i=0;

int main()
{
     printf("Write what element are you searching for\n");
     scanf("%d",&a);//pointerul meu ia adresa elementului 0 din  array. Si zic sa stochezi valoarea aia acolo

    while(i<10){
        printf("Write the element %i of your array\n",i);
        scanf("%d",ptr1);
        if(*ptr1==a){
            ptr2=ptr1;
        }
        ptr1++;
        i++;
    }

    ///\\\///

        if(ptr2!=NULL){
            printf("Pointerul a gasit valoarea %d , care se afla la adresa %d\n",*ptr2,ptr2);
        }else{
             printf("Input element does not exist in array");
        }

}
