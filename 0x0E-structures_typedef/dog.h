#ifndef POPPY
#define POPPY
/**
 * struct dog - details about dog
 * @name: first member
 * @age: second member
 * @owner: thirs member
 * Description: details about his name,age,owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
