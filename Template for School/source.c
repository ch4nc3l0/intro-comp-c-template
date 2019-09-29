//**************************************************************
//...Written by..: Chance Gurley
//...Date Written: SEPT 27, 2019
//...Purpose.....: Programming class
//**************************************************************
#define _CRT_SECURE_NO_WARNINGS // Allows use of scanf instead of scanf_s
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define PAUSE system("pause")
#define CLS system("cls")

main() {
	// Set Variables
	int userInput;

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


	

	PAUSE;
} // end of main
