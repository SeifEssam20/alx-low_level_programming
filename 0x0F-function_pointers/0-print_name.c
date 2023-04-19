#include "function_pointers.h"
/**
 * print_name - prints a name using a function passed as a parameter
 * @name: pointer to the name to print
 * @f: pointer to the function that will be used to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
