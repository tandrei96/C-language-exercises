#include <stdio.h>
#include <stdlib.h>


void library(){

    char book_name;

    printf("Please enter the name of the book you want\n");
    scanf("%c",&book_name);

    if(book_name=='X'||book_name=='D'||book_name=='F'){
        printf("The type of book you selected is SF\n");
    

            switch(book_name){
                case 'X':
                printf("Number of pages is 100\nOK\n");   
                break;
                
                case 'D':
                    printf("Number of pages is 20\nsmall\n");
                    break;

                default:
                    printf("Number of pages is 50\nsmall\n");
                    break;
            }

    }else if (book_name=='B'||book_name=='A'){
        printf("The type of the book you selected is adventure\n");
            switch (book_name) {
            case 'A':
                printf("Number of pages is 100\nOK\n");
                break;
            case 'B':
                printf("Number of pages is 150\nbig\n");
                break;
            
            default:
                printf("The book input is not adventure");
                break;
            }

    }else if(book_name=='C'){
        printf("The tpye of book you selected is drama\nNumber of pages is 250\nbig\n");

    }else if (book_name=='E'){
        printf("The type of book you selected is documentary\nNumber of pages is 50\nsmall\n");
    }
    else{
        printf("The book selected is not found in our repository");
    }

}

// struct carti
//     {
//         char X,A,B,C,D,E,F;
//     };
    
//     enum    
//     {
//         type_SF='X',
//     };
// void library(){
    

