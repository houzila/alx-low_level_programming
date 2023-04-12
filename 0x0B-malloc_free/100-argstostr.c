#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to the new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len = 0, pos = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
len++;

str = malloc(sizeof(char) * (len + ac + 1));

if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
str[pos++] = av[i][j];

str[pos++] = '\n';
}

str[pos] = '\0';

return (str);
}
