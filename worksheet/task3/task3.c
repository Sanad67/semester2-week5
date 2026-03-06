// Worksheet 2.5

/*
 * Task 3 - extension task
 * Implement a C program that demonstrates an input validation loop with the following requirements:
 * 1. Prompt the person to enter a password that must:
 *    a. Be at least 8 characters long
 *    b. Contain at least one uppercase letter
 *    c. Contain at least one number
 *    d. Contain at least one special character (!@#$%^&*)
 * 2.	Use an appropriate loop structure to continue prompting until a valid password is entered
 * 3.	After a successful password entry, ask if they want to validate another password (y/n)
 * 4.	Use an appropriate outer loop to continue the program until the person chooses to exit
 * This task requires combining nested loops with string processing and character checking.
 */

 #include <stdio.h>
 #include <string.h>
 #include <ctype.h>
 
 int main(void)
 {
	 char password[50];
	 char again[5];
 
	 while (again[0] != 'n')
	 {
		 int valid = 0;
		 while (!valid)
		 {
			 printf("Enter the password:\n");
			 char *result = fgets(password, sizeof(password), stdin);
			 password[strcspn(password, "\n")] = '\0';
 
			 if (result == NULL)
			 {
				 printf("Not valid.\n");
				 continue;
			 }
 
			 int hasUpper = 0, hasDigit = 0, hasSpecial = 0;
 
			 for (int i = 0; i < strlen(password); i++)
			 {
				 if (isupper(password[i]))
					 hasUpper = 1;
				 if (isdigit(password[i]))
					 hasDigit = 1;
				 if (strchr("!@#$%^&*", password[i]))
					 hasSpecial = 1;
			 }
 
			 if (strlen(password) >= 8 && hasUpper && hasDigit && hasSpecial)
			 {
				 printf("Valid!\n");
				 valid = 1;
			 }
			 else
			 {
				 printf("Not valid.\n");
			 }
		 }
 
		 printf("Validate another? (y/n): \n");
		 fgets(again, sizeof(again), stdin);
		 again[strcspn(again, "\n")] = '\0';
	 }
 
	 return 0;
 }