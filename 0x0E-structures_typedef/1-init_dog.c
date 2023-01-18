#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @name: first variable
 * @owner: second variable
 * @age: third variable
 * @d: fourth variable
 *
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);

	return (0);
}
