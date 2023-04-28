#include "dog.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");

    printf("My dog's name is %s and he is %f years old\n", my_dog.name, my_dog.age);
    printf("He likes to play with %s\n", my_dog.owner);

    return (0);
}

