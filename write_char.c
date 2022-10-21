#include "main.h"
#include <unistd.h>

/**
* _putchar - writes the character c to stdout on memory call
* @c: The character to print in ASCII
* Return: On success 1. null on zero
* On error, -1 is returned, and errno is set appropriately.
* Description: _putchar uses a local buffer of 1024 to call write
* as little as possible to memory
*/
int _putchar(char c)
{
static char buf[1024];
static int i;

if (c == -1 || i >= 1024)
{
write(1, &buf, i);
i = 0;
}
if (c != -1)
{
buf[i] = c;
i++;
}
return (1);
}

/**
* _puts - prints a string to stdout in 64bit
* @str: pointer to the string to print hello world
* Return: number of chars written in ASCII
*/
int _puts(char *str)
{
register int i;

for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
return (i);
}
