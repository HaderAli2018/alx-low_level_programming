#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: char name and float age and char owner
 */
struct dog
{
char *name;
float age;
char *owner
}
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
