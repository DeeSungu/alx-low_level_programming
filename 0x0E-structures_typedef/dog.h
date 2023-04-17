#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dogs information
 * @name: First
 * @age: Second
 * @owner: Third
 *
 * Description: Longer description
 */
struct dog
{
	char* name
	float* age
	char* owner
};

int main()
{
	struct dog my_dog = { "Poppy", 3.5, "Bob" };
	printf("My dog's name is %s, they are %f years old, and their owner is %s.\n", my_dog.name, my_dog.age, my_dog.owner);
	return 0;
}
#endif
