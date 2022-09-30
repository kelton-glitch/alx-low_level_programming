#include <stdio.h>
/**
 * main - Prints argumenys recieved
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		/*prints each argument*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}

		return (0);
	}
}
