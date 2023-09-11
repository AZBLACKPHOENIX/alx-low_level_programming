#include <stddef.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d !=NULL){
d-> name = strdup(name);
d-> age = age;
d-> owner = strdup(owner);
}
}
