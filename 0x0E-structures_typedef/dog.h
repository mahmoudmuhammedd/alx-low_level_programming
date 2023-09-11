#ifndef DOG_H
#define DOG_H

/**
 * struct dog - poppy
 * @name: input for name
 * @age: input for age
 * @owner: input for owner
 * Return: Always 0.
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
