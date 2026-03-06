// Week 5, Session 2

#include <stdio.h>
#include <string.h>
int main(void)
{
	/* Task 1.2b
	 * Convert the following Python while loop to (1) while loop (2) do...while loop in C.
	 *
	 * Python code:
	 * while True:
	 *     choice = input("Enter 'q' to quit: ")
	 *     if choice == 'q':
	 *         break
	 */
	char choice[10];

	do
	{
		printf("Enter 'q' to quit: \n");
		fgets(choice, sizeof(choice), stdin);
		choice[strcspn(choice, "\n")] = '\0';
	} while (strcmp(choice, "q") != 0);

	/*
while (1)
{
	printf("Enter 'q' to quit: \n");
	if (fgets(choice, sizeof(choice), stdin) == NULL)
	{
		printf("No input recievd \n");
		return 1;
	}
	choice[strcspn(choice, "\n")] = '\0';
	if (strcmp(choice, "q") == 0)
	{
		printf("correct\n");
		break;
	}
	else
	{
		printf("incorrect\n");
	}
}
*/
	// complete the rest of the code here

	return 0;
}