#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - dog struct
 * @name: member name
 * @age: member age
 * @owner: member owner
 * Description: this is a dog structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog - dog_t struct
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
