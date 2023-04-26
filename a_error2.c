#include "main.h"

/**
 * error_env - an error message.
 * @datash: data relevant
 * Return: an error message.
 */
char *error_env(data_shell *datash)
{
	int len;
	char *error_x;
	char *ver_string;
	char *msgs;

	ver_string = aux_itoa(datash->counter);
	msgs = ": Unable to add/remove from environment\n";
	len = _strlen(datash->av[0]) + _strlen(ver_string);
	len += _strlen(datash->args[0]) + _strlen(msgs) + 4;
	error_x = malloc(sizeof(char) * (len + 1));
	if (error_x == 0)
	{
		free(error_x);
		free(ver_string);
		return (NULL);
	}

	_strcpy(error_x, datash->av[0]);
	_strcat(error_x, ": ");
	_strcat(error_x, ver_string);
	_strcat(error_x, ": ");
	_strcat(error_x, datash->args[0]);
	_strcat(error_x, msgs);
	_strcat(error_x, "\0");
	free(ver_string);

	return (error_x);
}
/**
 * error_path_126 - an error message for the path/failure denied permission.
 * @datash: data relevant
 * Return: an error string.
 */
char *error_path_126(data_shell *datash)
{
	int len;
	char *ver_string;
	char *error_x;

	ver_string = aux_itoa(datash->counter);
	len = _strlen(datash->av[0]) + _strlen(ver_string);
	len += _strlen(datash->args[0]) + 24;
	error_x = malloc(sizeof(char) * (len + 1));
	if (error_x == 0)
	{
		free(error_x);
		free(ver_string);
		return (NULL);
	}
	_strcpy(error_x, datash->av[0]);
	_strcat(error_x, ": ");
	_strcat(error_x, ver_string);
	_strcat(error_x, ": ");
	_strcat(error_x, datash->args[0]);
	_strcat(error_x, ": Permission denied\n");
	_strcat(error_x, "\0");
	free(ver_string);
	return (error_x);
}
