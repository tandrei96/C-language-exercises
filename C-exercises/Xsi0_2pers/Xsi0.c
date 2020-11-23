#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char string1[1];
char string2[1];
char board [9]={"_________"};

char Player1=0;
char Player2=0;

char Player1_choice;
char Player2_choice;

void WhoisFirst(char* x1, char* x2){
    time_t t;
    int i=0;
    *x1=0;
    *x2=0;
         /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 50 */
   /*Ii atribui lui Player 1 1 sau 0: 1 inseamna ca e primul, 0 ca e al2lea*/

       *x1=(rand() %2);
    if(*x1==0){
        printf("Player 2 is first\n");
        *x2=1;
    }
    else{
        printf("Player1 is first\n");
       *x2=0;
    }
}
    
void CheckForChoice( char *x1,char *x2) {
    if(Player1==1){
        //player1 is first . After this, Player1= X or 0, depeding on the stdin
        printf("Do you want to play with X or 0?\n");
        scanf(" %c",x1);
        printf("%c\n",*x1);
            if((*x1=='X')||(*x1=='x')){
                *x2='0';
            }
            else{
                *x2='X';
            }
    }
    else if(Player2==1){
          //player2 is first . After this, Player2= X or 0, depeding on the stdin
        printf("Do you want to play with X or 0?\n");
        scanf(" %c",x2);
        printf("%c\n",*x2);

            if((*x2=='X')||(*x2=='x')){
                *x1='0';
            }
            else{
                *x1='X';
            }
    }
}

void PrintBoard(void){
    char i=0;

        for(i=0;i<9;i++){
            printf("%c",board[i]);
        
            if((i==2) || (i==5) || (i==8)){
                
                printf("\n");
            }
        }
}


void MakeMovePlayer1(int poz,char ptr_choice){
    board[poz]=ptr_choice;
}

void MakeMovePlayer2(int poz,char ptr_choice){
    
    board[poz]=ptr_choice;
       
}
int CheckPosition(int *pozitiePlayer){
    int x=0;
    //verificam daca pozitia pe care a cerut player 1 sa faca mutarea este ocupata sau nu. Daca nu e ocupata returnam 1 ,si daca e ocupata returnam 0;
    if(((board[*pozitiePlayer])=='_') && ((board[*pozitiePlayer])!='\0')){
        x=1;
    }
    return x;
}
system (clr);


int CheckForWinner(){
    int x=0;
 //board ={"__________"}
    if((board[0]==board[4]) && ( board[0]==board[8]) &&(board[0]!='_')) {
        printf("1\n");
        printf("Player who played with %c has WON\n",board[0]);
        x=1;
    }
    else if((board[2]==board[4]) && ( board[2]==board[6])&&(board[2]!='_')){
        printf("2\n");

        printf("Player who played with %c has WON\n",board[2]);
        x=1;
       
    }
    else if((board[1]==board[4]) && ( board[1]==board[7])&&(board[1]!='_')){
        printf("3\n");

        printf("Player who played with %c has WON\n",board[1]);
        x=1;
        
    }
    
        return x;

}






void UserInput(char p1, char p2,char* ptr){
    int pozitieP1=0;
    int pozitieP2=0;
    int y=0;
    int x=0;
    int i=0;
        while(p1==1){

            while(1){ //daca pozitia nu e ocupata atunci imi face mutarea, printeaza bord ul si trece la urmatorul while care face acelasi lucru pt jucatorul 2. Dar daca e ocupata pozitia ma intreaba unde sa fac mutarea pana cand nimeresc ceva liber
                printf("Firstplayer.At which position do you want to place your choice?\n0|1|2\n3|4|5\n6|7|8\n");
                scanf("%d",&pozitieP1);
                x = CheckPosition(&pozitieP1); //returneaza 1 daca nu e ocupata sau 0 daca  e
                    if(x==1)//pozitieP1 nu e ocupata
                    {
                        MakeMovePlayer1(pozitieP1,Player1_choice);
                        PrintBoard();
                        
                        break;
                    }
                    else{
                        printf("Position is occupied.");

                    }
            }

            while(1){

                printf("Second player.At which position do you want to place your choice?\n0|1|2\n3|4|5\n6|7|8\n");
                scanf("%d",&pozitieP2);
                x = CheckPosition(&pozitieP2); //returneaza 1 daca nu e ocupata sau 0 daca  e
                    if(x==1)//pozitieP1 nu e ocupata
                    {
                        MakeMovePlayer2(pozitieP2,Player2_choice);
                        PrintBoard();
                        break;
                    }
                     else{
                        printf("Position is occupied.");

                    }
                    
            }
           
          y= CheckForWinner();
            if(y==1){
                break;
            }      
            
        }

        
    
    
        while(p2==1){

            while(1){

                printf("First player.At which position do you want to place your choice?\n0|1|2\n3|4|5\n6|7|8\n");
                scanf("%d",&pozitieP2);
                x = CheckPosition(&pozitieP2); //returneaza 1 daca nu e ocupata sau 0 daca  e
                    if(x==1)//pozitieP1 nu e ocupata
                    {
                        MakeMovePlayer2(pozitieP2,Player2_choice);
                        PrintBoard();
                        break;
                    }
                     else{
                        printf("Position is occupied.");

                    }
            }

            while(1){ 

                printf("Second player.At which position do you want to place your choice?\n0|1|2\n3|4|5\n6|7|8\n");
                scanf("%d",&pozitieP1);
                x = CheckPosition(&pozitieP1); //returneaza 1 daca nu e ocupata sau 0 daca  e
                    if(x==1)//pozitieP1 nu e ocupata
                    {
                        MakeMovePlayer1(pozitieP1,Player1_choice);
                        PrintBoard();
                        break;
                    }
                    else{
                        printf("Position is occupied.");

                    }
            }

            y= CheckForWinner();
            if(y==1){
                break;
            }    
                   

        }   
    
}

int main(){
    
    char answer[3];
    WhoisFirst(&Player1,&Player2); //cu functia asta vad defapt cine e primul jucator. Ex:Daca e player1 atunci Player1=1;
    CheckForChoice(&Player1_choice,&Player2_choice); //function returns X or 0 depending on first player choice, and what choice remains to the next player
    
    while(1){
                system("clear");

        //i can make a function that calls WhoIsFirst and CheckForChoice  as functions.
        UserInput(Player1,Player2,board); //function completes the board with both inputs from players
        PrintBoard(); //function prints out the board in order for the player to see and plan his next move
                    
        printf("Do you want to continue?\n");
        scanf("%c",&answer);
        if(answer=="no"){
            break;
        }
        else{
        WhoisFirst(&Player1,&Player2); //cu functia asta vad defapt cine e primul jucator. Ex:Daca e player1 atunci Player1=1;
       CheckForChoice(&Player1_choice,&Player2_choice); //function returns X or 0 depending on first player choice, and what choice remains to the next player
            
        }
    

    }
}

   
