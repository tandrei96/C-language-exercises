#include "cow.h"
#include <stdlib.h>
#include <stdio.h>

Cow* new_cow(){
    Cow* cow = calloc (1,sizeof(struct COW_STRUCT));
    animal_constructor((Animal*)cow, "Moooh moooh");

    return cow;
}