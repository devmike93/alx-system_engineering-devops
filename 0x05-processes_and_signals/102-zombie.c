#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * infinite_while - run an infinite loop.
 *
 * Return: always 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - create a five zombie processes.
 *
 * Return: 0 if success.
 */
int main(void)
{
	pid_t child_pid;
	int i = 0;

	while (i < 5)
	{
		child_pid = fork();
		if (child_pid > 0)
		{
			printf("Zombie process created, PID: %d\n", child_pid);
			sleep(1);
		}
		else
		{
			exit(0);
		}
		i++;
	}

	infinite_while();

	return (0);
}
