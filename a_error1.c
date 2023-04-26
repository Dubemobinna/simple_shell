#include "main.h"

/**
 * strcat_cd - this is a function which connects the message for cd error
 *
 * @datash: data relevant
 * @msg: message to be printed
 * @error: message in the output
 * @ver_str: counter lines
 * Return: the error message
 */
char *strcat_cd(data_shell *datash, char *msg, char *error, char *ver_str)
{
	char *i_flag;

	_strcpy(error, datash->av[0]);
	_strcat(error, ": ");
	_strcat(error, ver_str);
	_strcat(error, ": ");
	_strcat(error, datash->args[0]);
	_strcat(error, msg);
	if (datash->args[1][0] == '-')
	{
		i_flag = malloc(3);
		i_flag[0] = '-';
		i_flag[1] = datash->args[1][1];
		i_flag[2] = '\0';
		_strcat(error, i_flag);
		free(i_flag);
	}
	else
	{
		_strcat(error, datash->args[1]);
	}

	_strcat(error, "\n");
	_strcat(error, "\0");
	return (error);
}

/**
 * error_get_cd - an error message for the cd command in get_cd
 * @datash: relevant data
 * Return: This is an error message
 */
char *error_get_cd(data_shell *datash)
{
	int len, len_id;
	char *error, *ver_str, *msg;

	ver_str = aux_itoa(datash->counter);
	if (datash->args[1][0] == '-')
	{
		msg = ": Illegal option ";
		len_id = 2;
	}
	else
	{
		msg = ": can't cd to ";
		len_id = _strlen(datash->args[1]);
	}

	len = _strlen(datash->av[0]) + _strlen(datash->args[0]);
	len += _strlen(ver_str) + _strlen(msg) + len_id + 5;
	error = malloc(sizeof(char) * (len + 1));

	if (error == 0)
	{
		free(ver_str);
		return (NULL);
	}

	error = strcat_cd(datash, msg, error, ver_str);

	free(ver_str);

	return (error);
}

/**
 * error_not_found - non-specific error message for command not found
 * @datash: data relevant
 * Return: An Error message
 */
char *error_not_found(data_shell *datash)
{
	int length;
	char *error_x;
	char *ver_string;

	ver_string = aux_itoa(datash->counter);
	length = _strlen(datash->av[0]) + _strlen(ver_string);
	length += _strlen(datash->args[0]) + 16;
	error_x = malloc(sizeof(char) * (length + 1));
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
	_strcat(error_x, ": not found\n");
	_strcat(error_x, "\0");
	free(ver_string);
	return (error_x);
}

/**
 * error_exit_shell - exit error message in get_exit
 * @datash: data relevant
 * Return: Error message
 */
char *error_exit_shell(data_shell *datash)
{
	int len;
	char *error_x;
	char *ver_string;

	ver_string = aux_itoa(datash->counter);
	len = _strlen(datash->av[0]) + _strlen(ver_string);
	len += _strlen(datash->args[0]) + _strlen(datash->args[1]) + 23;
	error_x = malloc(sizeof(char) * (len + 1));
	if (error_x == 0)
	{
		free(ver_string);
		return (NULL);
	}
	_strcpy(error_x, datash->av[0]);
	_strcat(error_x, ": ");
	_strcat(error_x, ver_string);
	_strcat(error_x, ": ");
	_strcat(error_x, datash->args[0]);
	_strcat(error_x, ": Illegal number: ");
	_strcat(error_x, datash->args[1]);
	_strcat(error_x, "\n\0");
	free(ver_string);

	return (error_x);
}
