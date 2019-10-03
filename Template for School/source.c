//**************************************************************
//...Written by..: Chance Gurley
//...Date Written: OCT 3, 2019
//...Purpose.....: Programming class
//**************************************************************
#define _CRT_SECURE_NO_WARNINGS // Allows use of scanf instead of scanf_s
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define PAUSE system("pause")
#define CLS system("cls")

main() {
	// Set Variables
	int userInput;
	int counter;
	int spaces;
	int print;
	int i = 0;
	char asterisks[300] = "*";
	char userString[50];

	// Print progam instructions
	printf("This app will output the shape of a triangle or diamond made of asterisks with the amount of rows equal to the input\n");

	// Get user input
	printf("Input the number of asterisks 1-50\n");
	scanf(" %i", &userInput);

	// Just in case user enter a char program doesn't just loop forever || not perfect but works in this application decently
	getchar();

	// Verify user input
	while ((userInput < 1) || (userInput > 50)) {
		printf("Please enter a valid input\n");
		scanf("%i", &userInput);

		// Just in case user enter a char program doesn't just loop forever
		getchar();
	}

	// Ask user how they want the print | triangle | Upside down | Backwards | Backwards & Upside-down | Diamond
	printf("Please enter how you want the asterisks to print\n");
	printf("Acceptable inputs are triangle, upsideDown, backwards, backwardsUpsideDown, diamond\n");
	scanf("%s", &userString);

	// Validate userString
	while (strcmp("triangle", userString)
		&& strcmp("diamond", userString)
		&& strcmp("upsideDown", userString)
		&& strcmp("backwards", userString)
		&& strcmp("backwardsUpsideDown", userString)) {
		printf("invalid input please input triangle, upsideDown, backwards, backwardsUpsideDown, diamond\n");
		scanf("%s", &userString);
	}

	// Loop to create triangle
	// Check if input is triangle
	if (!strcmp("triangle", userString)) {
		printf("Printing a triangle with %i rows\n", userInput);

		// Loop equal to the num user entered
		for (counter = userInput; counter > 0; counter--) {
			
			// Print asterisks
			printf("%s\n", asterisks);
			
			// Add one asterisk everytime loop is ran
			strcat(asterisks, "*");

			// Add a somewhat funny joke
			if (userInput == 1) {
				printf("Not much of a %s huh?\n", userString);
			}
			
		}
	}

	// Loop to create diamond
	// Check if input is diamond
	if (!strcmp("diamond", userString)) {
		while ((userInput < 10)||(userInput > 50))
		{
			printf("For a diamond shape please enter a digit greater than 10 but still less than 50\n");
			scanf("%i", &userInput);
		}

		printf("Printing a diamond with the middle row being %i *s \n", userInput);


			// Start loop for first half of diamond
			for (counter = userInput; counter > 0; counter--) {
				
				// Keep track of how many iterations (I wanted to keep counter equal to userinput for spaces)
				i++;

				// Loop to insert spaces
				for (spaces = 0; spaces < (counter / 2) ; spaces++) 
					printf(" ");

				// Loop to print *
				for (print = i; print > 0;print--)
				printf("*");

			// Print newline after each iteration
			printf("\n");
			}
			
			// Start loop for second half of diamond
			for (counter = 0; counter < userInput; counter++) {

				// Loop to insert spaces
				for (spaces = 0; spaces < (counter / 2); spaces++)
					printf(" ");

				// Loop to print *
				for (print = 0; print < userInput - counter - 1; print++)
					printf("*");

				// Print newline after each iteration
				printf("\n");
			}
	}

	// Print upsideDown
	if (!strcmp("upsideDown", userString)) {

		// Loop equal to the num user entered
		for (counter = userInput; counter > 0; counter--) {

			// Print *
			for (print = 0; print < counter; print++)
				printf("*");

			// print newline
			printf("\n");

			// Add a somewhat funny joke
			if (userInput == 1) {
				printf("Not much of a %s huh?\n", userString);
			}
		}
	}

	// Check if input is backwards
	if (!strcmp("backwards", userString)) {

		// Start loop for first half of diamond
		for (counter = userInput; counter > 0; counter--) {

			// Keep track of how many iterations (I wanted to keep counter equal to userinput for spaces)
			i++;

			// Loop to insert spaces
			for (spaces = 0; spaces < counter - 1; spaces++)
				printf(" ");

			// Loop to print *
			for (print = i; print > 0; print--)
				printf("*");

			// Print newline after each iteration
			printf("\n");
		}
	}

	// Check if input is backwardsUpsideDown
	if (!strcmp("backwardsUpsideDown", userString)) {

		// Start loop for first half of diamond
		for (counter = userInput; counter > 0; counter--) {

			// Loop to insert spaces
			for (spaces = userInput; spaces > counter; spaces--)
				printf(" ");
				
			// Loop to print *
			for (print = counter; print > 0; print--)
				printf("*");

			// Print newline after each iteration
			printf("\n");
		}
	}


	PAUSE;
} // end of main
