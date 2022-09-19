#include <stdio.h>

void calculateAverage(void);

/**
  * calculateAverage - computes the average of specified numbers
  * main - calls the functions to calculate
  *average of numbers
  *
  *
  *Return: Always 0 (Success)
  *
  */

int main(void)
{
	calculateAverage();
	return (0);
}

void calculateAverage(void)
{
	int totalNumbers, i;
	float numbersRead, total, result;

	printf("\nThis program calculates average of numbers\n");
	printf("NOTE! This program can only calculate maximum of 50 numbers\n");
	printf("How many numbers do you want to calculate? ");
	scanf("%d", &totalNumbers);
	printf("\nYou are calculating the average of %d numbers\n", totalNumbers);

	if (totalNumbers <= 50)
	{
		for (i = 0; i < totalNumbers; i++)
		{
			printf("No%d >>> ", i + 1);
			scanf("%f", &numbersRead);
			total += numbersRead;
		}

	result = total / totalNumbers;
	printf("The average is : %.3f\n", result);

	}
	else
	{
		printf("More than the specified intake amount, please try again\n");
		calculateAverage();
	}
	
}
