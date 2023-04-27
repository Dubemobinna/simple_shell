#include "main.h"

/**
 * aux_help_env - Help information for the builtin env
 * Return: no return
 */
void aux_help_env(void)
{
	char *help_y = "env: env [option] [name=value] [command [args]]\n\t";

	write(STDOUT_FILENO, help_y, _strlen(help_y));
	help_y = "Print the enviroment of the shell.\n";
	write(STDOUT_FILENO, help_y, _strlen(help_y));

}
/**
 * aux_help_setenv - Help information on builtin setenv
 * Return: nothing to return
 */
void aux_help_setenv(void)
{

	char *help_y = "setenv: setenv (const char *name, const char *value,";

	write(STDOUT_FILENO, help_y, _strlen(help_y));
	help_y = "int replace)\n\t";
	write(STDOUT_FILENO, help_y, _strlen(help_y));
	help_y = "Add a new definition to the environment\n";
	write(STDOUT_FILENO, help_y, _strlen(help_y));
}
/**
 * aux_help_unsetenv - builtin unsetenv help information
 * Return: nothing to return
 */
void aux_help_unsetenv(void)
{
	char *help_y = "unsetenv: unsetenv (const char *name)\n\t";

	write(STDOUT_FILENO, help_y, _strlen(help_y));
	help_y = "Remove an entry completely from the environment\n";
	write(STDOUT_FILENO, help_y, _strlen(help_y));
}


/**
 * aux_help_general - Entry point help information
 * Return: nothing to return
 */
void aux_help_general(void)
{

