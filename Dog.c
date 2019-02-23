//
// Created by elias on 2/23/19.
//

#include "Dog.h"
#include <stdlib.h>

struct Dog{
    char* name;
};

Dog* Dog_create(struct Dog* self, const char* name){
    self->name = name;
}
void Dog_destroy(struct Dog* self){
    free(self);
}
void woof(Dog* self);
const char* Dog_name(Dog* self);
