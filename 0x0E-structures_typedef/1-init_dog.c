#include "dog.h"


/**
 * init_dog - Entry point
 *
 * Description: initialize a variable of type struct dog
 *
 * @d: input pointer to struct
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: dogs owner
 *
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
