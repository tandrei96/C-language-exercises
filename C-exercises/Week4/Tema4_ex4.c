#include <stdio.h>
#include <stdlib.h>

 


int main(){
    int first;  //first number
    int second; //second number
    char result;    //sign of the operation between numbers
    char D; //result format 
   
    printf ("First number\n");
    scanf("%d",&first);
   
    printf("Second number\n");
    scanf("%d",&second);
   
    printf("What type of operation do you want to do\n");
    scanf(" %c\n",&result);
   
    printf("What format do you want your result to be?   Char->type C   int->type I  float->type F\n");
    scanf(" %c\n",&D); //bagi un spatiu inainte de %c
    
    if (result=='+'){  //if the result you want is + then check what the user want it's format to be.If he wants char,then print the sum casted
    
        switch (D)
        {
        case 'C':
            printf("Result of your sum in char format is %c", ((char)first+(char)second));
            break;
        
        case 'I':
            printf("Result of your sum in int format is %d", (first+second));
            break;

        case 'F':
            printf("Result of your sum in float format is %lf", ((float)first +(float)second));
            break;
            
        default:
            printf("Letter introduced is wrong.Try again with Uppercase letters");
            break;
        }

    }else if(result=='-'){
        switch (D)
        {
        case 'C':
            printf("Result of your sum in char format is %c", (char)first-(char)second);
            break;
        
        case 'I':
            printf("Result of your sum in int format is %d", first-second);
            break;

        case 'F':
            printf("Result of your sum in float format is %lf", (float)first -(float)second);
            break;
            
        default:
            printf("Letter introduced is wrong.Try again with Uppercase letters");
            break;
        }
    }else if (result=='*'){
        switch (D)
        {
        case 'C':
            printf("Result of your sum in char format is %c", (char)first*(char)second);
            break;
        
        case 'I':
            printf("Result of your sum in int format is %d", first*second);
            break;

        case 'F':
            printf("Result of your sum in float format is %lf", (float)first*(float)second);
            break;
            
        default:
            printf("Letter introduced is wrong.Try again with Uppercase letters");
            break;
        }
    }else if (result=='/'){
        switch (D)
        {
        case 'C':
            printf("Result of your sum in char format is %c", (char)first/(char)second);
            break;
        
        case 'I':
            printf("Result of your sum in int format is %d", first/second);
            break;
        case 'F':
            printf("Result of your sum in float format is %lf", (float)first/(float)second);
            break;
            
        default:
            printf("Letter introduced is wrong.Try again with Uppercase letters");
            break;
        }
    }

    return 0;
}