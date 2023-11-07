#include"dog.h"
#include <stddef.h>
/**
 * init_dog - func to  initialize a variable of type stuctdog
 * @d: pointer to struct dog
 * @name: pointer to the name initialize
 * @age: age to initialze
 * @owner: owner to initialize
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}



}
