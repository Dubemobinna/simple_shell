#include "main.h"

/**
 * aux_help - some help information on builtin help.
 * Return: nothing to return
 */
void aux_help(void)
{
	char *help_z = "help: help [-dms] [pattern ...]\n";

	write(STDOUT_FILENO, help_z, _strlen(help_z));
	help_z = "\tDisplay information about builtin commands.\n ";
	write(STDOUT_FILENO, help_z, _strlen(help_z));
	help_z = "Displays brief summaries of builtin commands.\n";
	write(STDOUT_FILENO, help_z, _strlen(help_z));
}
/**
 * aux_help_alias -some help information on builtin alias.
 * Return: there is nothing to return
 */
void aux_help_alias(void)
{
	char *help_z = "alias: alias [-p] [name[=value]...]\n";

	write(STDOUT_FILENO, help_z, _strlen(help_z));
	help_z = "\tDefine or display aliases.\n ";
	write(STDOUT_FILENO, help_z, _strlen(help_z));
}
/**
 * aux_help_cd - More help information on builtin alias.
 * Return: nothing to return
 */
void aux_help_cd(void)
{
	char *help_z = "cd: cd [-L|[-P [-e]] [-@]] [dir]\n";

	write(STDOUT_FILENO, help_z, _strlen(help_z));
	help_z = "\tChange the shell working directory.\n ";
	write(STDOUT_FILENO, help_z, _strlen(help_z));
}
