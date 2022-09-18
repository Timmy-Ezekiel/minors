#include <stdio.h>

/**
  * myRectangle - This function create a rectangle
  *
  * @height : This is an interger parameter for the rectangle height.
  * @width: this is an integer parameter for the rectangle width.
  *
 **/

void myRectangle(int height, int width)
{
	#define INITIAL 1

	int x, y;
	int Nwidth = width * 2;

	for (x = INITIAL; x <= height; x++)
	{
		if (x == 1)
		{
			for (y = INITIAL; y <= Nwidth; y++)
			{
				putchar('_');
			}
		}
		else if (x == height)
		{
			for (y = INITIAL; y <= Nwidth; y++)
			{
				if ((y == INITIAL) || (y == Nwidth))
				{
					putchar('|');
				}
				else
				{
					putchar('_');
				}
			}
		}
		else
		{
			for (y = INITIAL; y <= Nwidth; y++)
			{
				if ((y != INITIAL) && (y != Nwidth))
				{
					putchar(' ');
				}
				else
				{
					putchar('|');
				}
			}
		}
		putchar('\n');
	}
return;
}
