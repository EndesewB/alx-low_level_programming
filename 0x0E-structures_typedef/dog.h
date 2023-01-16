#ifndef DOG_H
#define DOG_H
/**
 * struct dog - short description about the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: to whom it belongs to
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;
#endif
