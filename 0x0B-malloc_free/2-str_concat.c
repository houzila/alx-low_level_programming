#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate string to new memory space location
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string, NULL if fail
 */
char *_strdup(char *str)
{
char *dup_str;
int i;

if (str == NULL)
return (NULL);

i = 0;
while (str[i] != '\0')
i++;

dup_str = malloc(sizeof(char) * (i + 1));

if (dup_str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
dup_str[i] = str[i];

dup_str[i] = '\0';

return (dup_str);
}
