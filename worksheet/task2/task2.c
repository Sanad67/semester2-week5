/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Sanad
 * ID:
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	long decimal = 0;
	char hex[9];
	int num;

	while (1)
	{
		decimal = 0;
		printf("Enter a hexadecimal:");

		if (fgets(hex, sizeof(hex), stdin) == NULL)
		{
			printf("Error no input \n");
			return 1;
		}

		hex[strcspn(hex, "\n")] = '\0';

		if (strlen(hex) > 8)
		{
			printf("Tooo long \n");
			return 1;
		}
		for (int i = 0; i < strlen(hex); i++)

		{
			hex[i] = tolower(hex[i]);
			if (isdigit(hex[i]))
			{
				decimal = decimal * 16 + (hex[i] - '0');
			}
			else if (isalpha(hex[i]))
			{
				if (hex[i] < 'a' || hex[i] > 'f')
				{
					printf("Error: Invalid Hexadecimal\n");
					return 1;
				}
				decimal = decimal * 16 + (hex[i] - 'a' + 10);
			}
		}
		printf("decimal:%ld\n", decimal);
	}
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");

	// print the decimal result

	return 0;
}