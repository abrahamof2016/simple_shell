#include "shell.h"
/**
  * prompt - displays a prompt and wait for the user to type a command.
  *
  * Return: nothing.
  */
void prompt(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		write(STDERR_FILENO, "$ ", 2);
}
