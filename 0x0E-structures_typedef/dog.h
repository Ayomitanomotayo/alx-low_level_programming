#ifndef DOG_H
#define DOG_H
/**
 * typedef struct dog dog_t- A data type used to collect dog Id's
 *@name: The name of the dog
 *@age: The age of the dog
 *@owner: The details of the dog owner
 *
 * Return: Alway success
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
