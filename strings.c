#include "main.h"

/**
 * _strcpy - makes a copy of a string
 * @dest: address of buffer to copy string to
 * @src: address of string to be copied
 *
 * Return: the pointer to dest. Otherwise NULL
 */
char *_strcpy(char *dest, const char *src)
{
	unsigned int i;

	if (src == NULL || dest == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - finds the length of a given string
 * @str: given string
 *
 * Return: length of str
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	if (str == NULL)
		return (0);

	while (*str)
	{
		length++;
		str++;
	}

	return (length);
}


/**
 * _strdup - creates a copy of a given string
 * @str: string to copy
 *
 * Return: new string identical to str. Otherwise NULL
 */
char *_strdup(const char *str)
{
	unsigned int length;
	char *result;

	if (str == NULL)
		return (NULL);

	/* allocate space for new string */
	length = _strlen(str);
	result = malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);

	/* copy contents of str into new string */
	return (_strcpy(result, str));
}

/**
 * _strtok - tokenizes a given string using a given delimiter
 * @str: string
 * @delim: delimiter
 *
 * Return: pointer to next token. Otherwise NULL
 */
char *_strtok(char *str, const char *delim)
{
	char c;
	int found_char = 0;
	char *start;
	static char *current;

	start = (str ? str : current);

	if (str)
		current = str;

	if (delim == NULL || *current == '\0')
		return (NULL);

	c = delim[0];

	while (*current == c) /* ignore separators at beginning */
	{
		start++;
		current++;
	}

	while (*current)
	{
		if (*current == c && found_char) /* found a delimiter */
		{
			*current = '\0';
			current++;
			break;
		}

		found_char = 1;
		current++;
	}

	while (*current && *current == c) /* ignore separators at end */
		current++;

	return (start);
}



/**
 * _atoi - converts a string to an integer
 * @str: string
 *
 * Return: integer equivalent. Otherwise -1
 */
int _atoi(char *str)
{
	int i, j, n, result;

	if (str == NULL)
		return (-1);

	n = _strlen(str);

	for (i = n - 1, j = 1, result = 0; i >= 0; i--, j *= 10)
	{
		if (result < 0 || str[i] > '9' || str[i] < '0')
			return (-1);

		result += (str[i] - '0') * j;
	}

	return (result % 256);
}
