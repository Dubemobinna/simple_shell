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
	char *help_y = "^-^ bash, version 1.0(1)-release\n";

	write(STDOUT_FILENO, help_y, _strlen(help_y));
	help_y = "These commands are defined internally.Type 'help' to see the list";
	write(STDOUT_FILENO, help_y, _strlen(help_y));
	help_y = "Type 'help name' to find out more about the function 'name'.\n\n ";
	write(STDOUT_FILENO, help_y, _strlen(help_y));
	help_y = " alias: alias [name=['string']]\n cd: cd [-L|[-P [-e]] [-@]] ";
	write(STDOUT_FILENO, help_y, _strlen(help_y));
	help_y = "[dir]\nexit: exit [n]\n  env: env [option] [name=value] [command ";
	write(STDOUT_FILENO, help_y, _strlen(help_y));
	help_y = "[args]]\n  setenv: setenv [variable] [value]\n  unsetenv: ";
	write(STDOUT_FILENO, help_y, _strlen(help_y));
	help_y = "unsetenv [variable]\n";
	write(STDOUT_FILENO, help_y, _strlen(help_y));
}
/**
 * aux_help_exit - Help information fot the builint exit
 * Return: no return
 */
void aux_help_exit(void)
{
	char *help_y = "exit: exit [n]\n Exit shell.\n";

	write(STDOUT_FILENO, help_y, _strlen(help_y));
	help_y = "Exits the shell with a status of N. If N is ommited, the exit";
	write(STDOUT_FILENO, help_y, _strlen(help_y));
	help_y = "statusis that of the last command executed\n";
	write(STDOUT_FILENO, help_y, _strlen(help_y));
}
