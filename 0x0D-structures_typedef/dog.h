#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - basic info list.
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: Longer description (no need)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_*/
