#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <semaphore.h>
#include <unistd.h>
#include <sys/sem.h>
#include "shared_memory.h"
#include <errno.h>

#define BLOCK_SIZE 4096 //blocksize is 4096 kB
#define NUM_ITERATIONS 10
int main(int argc, char *argv[]){
    if(argc!=2){
        printf("usage - %s [stuff to write]",argv[0]);
        return -1;
    }

    sem_t* sem_prod= sem_open(SEM_PRODUCER_FNAME,0); //daca dau call la decrementare acuma imi blocheaza procesul ala pentru ca am indraznit sa fac asta
    //verificam ca am creat semaphore-ul 
    if(sem_prod==SEM_FAILED){
        perror("sem_open/producer: \n");
    }

    // sem_t* sem_cons= sem_open(SEM_CONSUMER_FNAME,0);
    // if(sem_cons==SEM_FAILED){
    //     perror("sem_open/consumer: \n");
    
    // }


    //grab the shared memory block

    char*block =attach_memory_block(FILENAME,BLOCK_SIZE);
    if(block==NULL){
        perror("Error creating block write: \n");
        return -1;
    }

    for(int i=0;i<NUM_ITERATIONS;i++){

        // sem_wait(sem_cons);//wait for the consume to have a open slot

        printf("Writing : \"%s\"\n",argv[1]);
        strncpy(block,argv[1],BLOCK_SIZE);

         sem_post(sem_prod); //signal that something has been produced
    }
    
    sem_close(sem_prod);
    // sem_close(sem_cons);
    detach_memory_block(block);
}