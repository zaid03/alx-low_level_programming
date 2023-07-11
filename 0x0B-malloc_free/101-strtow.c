#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: numbers of elements.
 * @size: size of elements.
 * Return: array.
 */

void *_calloc(int nmemb, int size)
{
	int index;
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == 0)
		return (NULL);
	for (index = 0; index < (nmemb * size); index++)
		pointer[index] = 0;
	return (pointer);
}

/**
 * wdslen - return length of word
 * @word: word to measure
 * Return: length of word
 */

int wdslen(char *word)
{
	int i = 0;

	while (word[i] && word[i] != 32)
		i++;
	return (i);
}

/**
 * dfree - free to double pointer
 * @ptr: double pointer
 * Return: nothing
 */

void dfree(char **ptr)
{
	int i = 0;

	while (ptr && ptr[i])
		free(ptr[i++]);
	free(ptr);
}

/**
 * _strcpy - copy string of src to dest
 * @dest: allocation where copy src string
 * @src: string to be copied.
 * @len: length of src.
 * Return: dest
 */

char *_strcpy(char *dest, char *src, int len)
{
	int i = 0;

	while (i < len)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = 0;
	return (dest);
}

/**
 * strtow - splits a string into words.
 * @str: string to split
 * Return: pointer to pointer with all words
 */

char **strtow(char *str)
{
	char **words = NULL;
	int idx, jdx, len, nwords;

	if (!str || !(*str))
		return (NULL);
	idx = len = nwords = 0;
	while (str[idx])
	{
		if (str[idx] != 32 && (str[idx + 1] == 32 || !str[idx + 1]))
			nwords++;
		idx++;
	}
	if (!nwords)
		return (NULL);
	words = _calloc(nwords + 1, sizeof(char *));
	if (!words)
		return (NULL);
	idx = 0, jdx = 0;
	while (str[idx] && jdx < nwords)
	{
		if (str[idx] != 32)
		{
			len = wdslen(str + idx);
			words[jdx] = malloc((len + 1) * sizeof(char));
			if (!words[jdx])
			{
				dfree(words);
				return (NULL);
			}
			_strcpy(words[jdx], str + idx, len);
			jdx++, idx += len;
		}
		idx++;
	}
	return (words);
}
