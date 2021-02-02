#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <errno.h>
#include "shared_memory.h"

#define IPC_RESULT_ERROR (-1)

//filename este writeshmem.c

static int get_shared_block (char* filename, int size){
    key_t key;
    //request a key associated with that block
    //the key is linked to a filename, so that other programs can access it.

    key=ftok(filename,0); //i want key 0 associated with that filename. Adica poti sa zici mai multe blockuri de memorie asociate cu un singur fisier, dar aici zicem doar key0.
    if(key==IPC_RESULT_ERROR){
        return IPC_RESULT_ERROR;
    }
    //creaza-mi un block daca nu exista cu prioritatile astea si key-ul asta, si size-ul asta
    return shmget (key,size,0644|IPC_CREAT); //returneaza un id valid la block-ul pe care l-am creat sau -1
}


char* attach_memory_block(char* filename,int size){
    int shared_block_id=get_shared_block(filename,size); //stocam in ceva id-ul ala al block-ului si ii zicem cu shmat sa il mapam in memorie. Apoi cu pointerul result putem sa pointam catre blockul ala de memorie.Practic asta returnam, valoarea lui result care este defapt adresa de inceput a blockului de memorie
    char* result;

    if(shared_block_id==IPC_RESULT_ERROR){
        return NULL;
    }
    //mapp the block into ram memory whatever is open. Returneaza un pointer catre blockul de memorie
    result=shmat (shared_block_id,NULL,0);
    if(result==(char*)IPC_RESULT_ERROR){
        return NULL;
    }
    return result;
}
//shmdt- i'm done with this memory
bool detach_memory_block(char* block){
    return (shmdt(block)!=IPC_RESULT_ERROR);
}
//shmctl - destroy this
bool destroy_memory_block(char* filename){
    int shared_block_id=get_shared_block(filename,0);
    if(shared_block_id==IPC_RESULT_ERROR){
        return NULL;
    }
    return (shmctl(shared_block_id,IPC_RMID,NULL)!=IPC_RESULT_ERROR);

}
