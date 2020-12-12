#ifndef ANIMAL_H
#define ANIMAL_H

    typedef struct ANIMAL_STRUCT
    {
        char* speech; //dc pun direct un char si nu un pun vector daca stochez string uri? Cu asta o sa stochez cum face un anumit animal
        void* (*speek)(struct ANIMAL_STRUCT* speech); //nu prea inteleg fraza asta
    }Animal;

    Animal* animal_constructor(Animal* animal, char* speech); //o functie care va returna un pointer de tip Animal si primeste ca parametrii un pointer animal si un pointer speech; 

    void animal_speek (Animal* animal);

#endif