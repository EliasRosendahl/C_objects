//
// Created by elias on 2/23/19.
//

#ifndef C_OBJECTS_DOG_H
#define C_OBJECTS_DOG_H

struct Dog;
Dog* Dog_create(struct Dog* self, const char* name);
void Dog_destroy(struct Dog* self);
void woof(struct Dog* self);
const char* Dog_name(struct Dog* self);


#endif //C_OBJECTS_DOG_H
