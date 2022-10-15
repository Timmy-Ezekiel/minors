#include <stdio.h>
#include "main.h"

/**
  *main - Test my Printf Function
  *
  *Return: int (0)
  *
 **/

int main(void)
{
	char str[] = "Welcome to this program man >>>>>>> This is a good program(done)   ";
	char ch;

	_printf("\nEnter your grade: ");
	scanf(" %c", &ch);
	_printf("\n%s >>>>>>>>>>>>your grade is %c\n", str, ch);
	_printf("\n%b >>>>>Welcome");
}
