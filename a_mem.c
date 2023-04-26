#include "main.h"

/**
 * _memcpy - copies information.
 * @newptr: destination pointer.
 * @ptr: pointer source.
 * @size: new pointer size.
 * Return: nothing to return.
 */
void _memcpy(void *newptr, const void *ptr, unsigned int size)
{
	char *char_p = (char *)ptr;
	char *char_newp = (char *)newptr;
	unsigned int i;

	for (i = 0; i < size; i++)
		char_newp[i] = char_p[i];
}

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size of the allocated space of ptr.
 * @new_size: bytes sizes of the new memory block.
 * Return: ptr.
 * for new_size == old_size, returns ptr without changes.
 * for when malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newp;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	newp = malloc(new_size);
	if (newp == NULL)
		return (NULL);

	if (new_size < old_size)
		_memcpy(newp, ptr, new_size);
	else
		_memcpy(newp, ptr, old_size);

	free(ptr);
	return (newp);
}

/**
 * _reallocdp - reallocates a memory block.
 * @ptr: memory formerly allocated.
 * @old_size: allocated space of ptr, size in byte.
 * @new_size: new memory size in byte.
 *
 * Return: ptr.
 * for new_size == old_size, returns ptr with no changes.
 * if malloc fails, returns NULL.
 */
char **_reallocdp(char **ptr, unsigned int old_size, unsigned int new_size)
{
	char **newp;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(sizeof(char *) * new_size));

	if (new_size == old_size)
		return (ptr);

	newp = malloc(sizeof(char *) * new_size);
	if (newp == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		newp[i] = ptr[i];

	free(ptr);

	return (newp);
}
