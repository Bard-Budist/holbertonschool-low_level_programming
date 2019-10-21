#ifndef header_file
#define header_file
/**
* struct dog - Django
* @name: Name of this Doge
* @age: Age if Doge
* @owner: owner this Doge
*
* Description: This about and Doge
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
