#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the new dog (dog_t), or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *new_name, *new_owner;
int name_len, owner_len;

/* Calculate the lengths of the name and owner strings */
name_len = strlen(name);
owner_len = strlen(owner);

/* Allocate memory for the new dog structure */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return NULL;

/* Allocate memory for the name string and copy the content */
new_name = malloc((name_len + 1) * sizeof(char));
if (new_name == NULL)
{
free(new_dog);
return NULL;
}
strcpy(new_name, name);

/* Allocate memory for the owner string and copy the content */
new_owner = malloc((owner_len + 1) * sizeof(char));
if (new_owner == NULL)
{
free(new_name);
free(new_dog);
return NULL;
}
strcpy(new_owner, owner);

/* Set the new dog's attributes */
new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;

return new_dog;
}



#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    if (my_dog != NULL)
    {
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
        free(my_dog->name);
        free(my_dog->owner);
        free(my_dog);
    }
    return 0;
}

