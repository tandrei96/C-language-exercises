#include <string.h>
#include "shared_memory.h"
#include <semaphore.h>
#include <sys/sem.h>
#include <stdio.h>
#include <errno.h>
int main(int argc, char* argv[]){

    if (argc!=1){
        printf("usage -%s//no args",argv[0]);
        return -1;
    }
    sem_unlink(SEM_CONSUMER_FNAME);
    sem_unlink(SEM_PRODUCER_FNAME);

    sem_t* sem_prod= sem_open(SEM_PRODUCER_FNAME, O_CREAT,0660,0); //daca dau call la decrementare acuma imi blocheaza procesul ala pentru ca am indraznit sa fac asta

    //verificam ca am creat semaphore-ul 
    if(sem_prod==SEM_FAILED){
        perror("sem_open/producer: \n");
    }

    // sem_t* sem_cons= sem_open(SEM_CONSUMER_FNAME, O_CREAT,0660,1);
    // if(sem_cons==SEM_FAILED){
    //     perror("sem_open/consumer: \n");
        
    // }



    char* block = attach_memory_block(FILENAME,BLOCK_SIZE);
    if (block == NULL){
        perror("error: \n");
        
    }
    while(1){

        sem_wait(sem_prod);

        while(strlen(block)>0){ //citim pana ni se termina block-ul de memorie alocat

            printf("Reading: \"%s\n",block);
            block++;
            
        }
        break;

        sem_post(sem_prod);
    }
    // sem_close(sem_cons);
    sem_close(sem_prod);

    detach_memory_block(block);
    
}