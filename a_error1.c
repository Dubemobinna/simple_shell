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

