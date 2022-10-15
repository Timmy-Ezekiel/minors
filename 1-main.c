#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  *main - Entry point (Test)
  *
  *Return: int (0) Success
  *
 **/

int main(void)
{
	char *str = "My name is timmytuyi } Hellos this is not what you want dear \\ hg } &shd";
	char *newstr;

	newstr = _rot13(str);
	printf("%s\n", newstr);
	free(newstr);
	return (0);
}
