#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

typedef struct {
  char* name;
  float age;
  char* owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner) {
  dog_t *new_dog = (dog_t*) malloc(sizeof(dog_t));

  if (new_dog == NULL) {
    return NULL;
  }

  new_dog->name = (char*) malloc(strlen(name) + 1);
  if (new_dog->name == NULL) {
    free(new_dog);
    return NULL;
  }
  strcpy(new_dog->name, name);

  new_dog->owner = (char*) malloc(strlen(owner) + 1);
  if (new_dog->owner == NULL) {
    free(new_dog->name);
    free(new_dog);
    return NULL;
  }
  strcpy(new_dog->owner, owner);

  new_dog->age = age;

  return new_dog;
}

int main() {
  dog_t *my_dog = new_dog("Fido", 3.5, "Alice");

  if (my_dog == NULL) {
    printf("Failed to create new dog.\n");
    return 1;
  }

  printf("My dog's name is %s, they are %f years old, and their owner is %s.\n", my_dog->name, my_dog->age, my_dog->owner);

  free(my_dog->name);
  free(my_dog->owner);
  free(my_dog);

  return 0;
}
