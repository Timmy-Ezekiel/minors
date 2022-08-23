	#include <stdio.h>
	#include <stdlib.h>

	int main() {

		//The student is taking Biology, English, Mathematics and Chemistry;

			struct Grades {
			char Bio;
			char Eng;
			char Mat;
			char Chem;
		}; //This array create a general collection of item for the grades.

		double mark, mark1, mark2, mark3; // This are the marks that the grades are converted to.

		printf("NOTE: make sure you enter the grades in Capital letters \n");
		printf("All characters appart from the grading letters are set to zero:\n");
		
		struct Grades val;
		printf("Biology Grade: ");
		scanf(" %c", &val.Bio);

		printf("English Grade: ");
		scanf(" %c", &val.Eng);

		printf("Mathematics Grade: ");
		scanf(" %c", &val.Mat);

		printf("Chemistry Grade: ");
		scanf(" %c", &val.Chem);
	

			//This functions checks the result of the score inputed by the user.
			double checkresult (char x) {
			double result;
				switch (x)
			{
			case 'A':
				result = 5.0;
				break;
			case 'B':
				result = 4.0;
				break;
			case 'C':
				result = 3.0;
				break;
			case 'D':
				result = 2.0;
				break;
			case 'E':
				result = 1.0;
				break;
			default:
				if(x != 'F') {
					printf("\n You have entered an invalid character! \"%c\"\n", x);
					printf("The character as been scored as zero\n");
				} else {
					result = 0.0;
				}
				break;
			}
				return result;
			}


			//This part of the code get this marks of the input and store it in four double variables.
			char inChar[4] = {
				val.Bio,
				val.Eng,
				val.Mat,
				val.Chem,
			};

		mark = checkresult(val.Bio);
		mark1 = checkresult(val.Eng);
		mark2 = checkresult(val.Mat);
		mark3 = checkresult(val.Chem);

		printf("\nThis are your grades\n");
		for(int x=0; x<4; x++) {
			printf("\t%c\n", inChar[x]);
		}

		printf("Your CGPA is: \n%.2f", (mark + mark1 + mark2 + mark3)/4);

	}
