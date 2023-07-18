#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initiatlization of dog data type
 *@d: pointer to struct
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Owner of the dog details
 *
 *Return: Always success(0)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(d->name = name);
	d->age = age;
	(d->owner = owner);
}
