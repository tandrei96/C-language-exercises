#include <stdio.h>
#include "cow.h"
/*scopul programului este sa simulam oop cu structuri*/

int main(){
    Cow* cow=new_cow(); //costruieste-mi o vaca care sa faca mooh
    Animal* animal_cow= (Animal*) cow; //dc a facut asa cu animal_cow
    animal_cow->speek(animal_cow);

    return 0;
}