#include <stdlib.h>
#include "main.h"
/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
int count = 0, i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
{
count++;
}
}
return (count);
}
/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL if
 *         memory allocation fails or if str is NULL or empty
 */
char **strtow(char *str)
{
char **words;
int i, j, k, len, word_count;
if (str == NULL || str[0] == '\0')
{
return (NULL);
}
word_count = count_words(str);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
for (i = 0, j = 0; i < word_count; i++)
{
while (str[j] == ' ')
{
j++;
}
len = 0;
while (str[j + len] != ' ' && str[j + len] != '\0')
{
len++;
}
words[i] = malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
{
free(words[k]);
}
free(words);
return (NULL);
}
for (k = 0; k < len; k++)
{
words[i][k] = str[j + k];
}
words[i][len] = '\0';
j += len;
}
words[word_count] = NULL;
return (words);
}

