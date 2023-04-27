#include "main.h"

/**
 * get_sigint - Handles crtl + c call in the prompt
 * @sig: this handles signal
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
