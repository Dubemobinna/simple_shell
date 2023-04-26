#include "main.h"

/**
 * aux_help - information on builtin help.
 * Return: nothing to return.
 */
void aux_help(void)
{
	char *help_x = "help: help [-dms] [pattern ...]\n";

	write(STDOUT_FILENO, help_x, _strlen(help_x));
	help_x = "\tDisplay information about builtin commands.\n ";
	write(STDOUT_FILENO, help_x, _strlen(help_x));
	help_x = "Displays brief summaries of builtin commands.\n";
	write(STDOUT_FILENO, help_x, _strlen(help_x));
}
/**
 * aux_help_alias - information on builtin alias.
 * Return: nothing to return.
 */
void aux_help_alias(void)
{
	char *help_x = "alias: alias [-p] [name[=value]...]\n";

	write(STDOUT_FILENO, help_x, _strlen(help_x));
	help_x = "\tDefine or display aliases.\n ";
	write(STDOUT_FILENO, help_x, _strlen(help_x));
}
/**
 * aux_help_cd - information on builtin alias.
 * Return: nothing to return.
 */
void aux_help_cd(void)
{
	char *help_x = "cd: cd [-L|[-P [-e]] [-@]] [dir]\n";

	write(STDOUT_FILENO, help_x, _strlen(help_x));
	help_x = "\tChange the shell working directory.\n ";
	write(STDOUT_FILENO, help_x, _strlen(help_x));
}
