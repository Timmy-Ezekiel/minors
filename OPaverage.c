#include <stdio.h>

/**
  * average - computes the average of specified numbers
  * @n : tally of the numbers input
  *
  *
  *Return: Average of the user input.
  *return value can be stored in double or float varibale (avoid data loss).
  */
double average(int n)
{
	int totalNumbers, i;
	double numbersRead, total, result;

	totalNumbers = n;
	printf("Input the numbers after each '>>>' prompt\n");
	for (i = 1; i <= totalNumbers; i++)
	{
		printf("No%d >>> ", i);
		scanf("%lf", &numbersRead);
		total += numbersRead;
	}

	result = total / totalNumbers;
	return (result);
}
