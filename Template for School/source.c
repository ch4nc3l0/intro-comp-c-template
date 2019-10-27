//**************************************************************
//...Written by..: Chance Gurley
//...Date Written: OCT 22, 2019
//...Purpose.....: Menu Assignment
//**************************************************************
#define _CRT_SECURE_NO_WARNINGS // Allows use of scanf instead of scanf_s
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define PAUSE system("pause")
#define CLS system("cls")

/***********************************
		Function Prototypes
***********************************/
void printMenu();
void raisePower();
void squareRoot();
void triangle();



/***********************************
		Global Variables
***********************************/
// NONE

/***********************************
				Main
***********************************/
main() {
	// Variable Declaration
	char userInput;

	// Print instructions for user
	printMenu();
	// Get user input
	scanf(" %c", &userInput);

	// Set user input to capital letter to improve matching
	userInput = toupper(userInput);

	// Create menu loop
	while (userInput != 'Q') {

		// Create switch menu
		switch (userInput)
		{
		case 'R':
			raisePower();
			printMenu();
			break;
		case 'S':
			squareRoot();
			printMenu();
			break;
		case 'T':
			triangle();
			printMenu();
			break;
		default:
			CLS;
			printf("Input is not valid, Please enter valid input\n");
			printMenu();
			break;
		}

		// Get New User Input
		scanf(" %c", &userInput);
		// Set user input to capital letter to improve matching
		userInput = toupper(userInput);
	}


	PAUSE;
} // end of main

/***********************************
		Function Definitions
***********************************/
// Print menu function
void printMenu() {
	CLS;
	printf("***** Main Menu *****\n");
	printf("[R]aise a number to a power\n");
	printf("[S]quare root of a number\n");
	printf("[T]riangle printout\n");
	printf("[Q]uit the program\n");
}

// raisePower function
void raisePower() {
	// Declare var
	int num;
	int power;
	int validator = 1;
	float powerAnswer;

	// Clear screen
	CLS;

	// Display instructions
	printf("***** Raise a number by a power *****\n");
	printf("Please input a number 1-20.\n");

	// Get user input for num, power
	scanf(" %i", &num);
	printf("Please input the power 1-10 to raise the number by.\n");
	scanf(" %i", &power);

	// Add simple input validation
	if ((num < 1 || num > 20) || (power < 1 || power > 10)) { // if validator
		validator = 0;
	}
	else {
		validator = 1;
	}

	while (validator == 0) {
		// Clear Screen
		CLS;

		// Inform user of bad input
		printf("***** Bad input recieved please enter numbers within the constraints *****\n");

		// Get inputs again
		printf("Please input a number 1-20.\n");
		scanf(" %i", &num);
		printf("Please input the power 1-10 to raise the number by.\n");
		scanf(" %i", &power);

		// Check input again
		if ((num < 1 || num > 20) || (power < 1 || power > 10)) { // repeated from before refactor
			validator = 0;
		}
		else {
			validator = 1;
		}
	}

	// Raise num to power
	powerAnswer = 1; // Reset powerAnswer each time func is run.
	for (int c = 0; c < power; c++) {
		powerAnswer *= num;
	}

	// Print answer
	printf("%i raised to the %i power is %.0f\n", num, power, powerAnswer);

	// Pause for user
	PAUSE;
}

// Square root function
void squareRoot() {
	// Declare var
	int usInput;
	int result;

	// Clear Screen
	CLS;

	// Display instructions
	printf("***** Find out the square root of a number *****\n");
	printf("Input a number from 1-1000\n");

	// Get user input
	scanf("%i", &usInput);

	// Check if input is valid
	while (usInput < 1 || usInput > 1000) { // while validator
		CLS;
		printf("***** Incorrect input, please input a number from 1-1000 to continue *****\n");
		scanf("%i", &usInput);
	}

	// Perform sq rt
	result = sqrt(usInput);

	// Print answer
	printf("The square root of %i is %i\n", usInput, result);

	// Pause for user
	PAUSE;
}

// Triangle function
void triangle() {
	// Declare var
	char userChar;
	int userRow;
	int printer;

	// Clear menu
	CLS;

	// Print Instructions 
	printf("***** Print a Triangle *****\n");
	printf("Enter the character you would like to use\n");

	// Get user input
	scanf(" %c", &userChar);
	printf("Enter the number of rows 3-50\n");
	scanf(" %i", &userRow);

	// Verify user input
	while (userRow < 3 || userRow > 50) {
		// Clear screen
		CLS;

		// Print error
		printf("***** Incorrect number of rows please enter a number 3-50 *****\n");

		// Get new input
		scanf("%i", &userRow);
	}


	// Print triangle according to user input
	for (int i = 0; i <= userRow; i++) {
		// Print correct num of characters
		printer = i;
		while (printer > 0) {
			printf("%c", userChar);
			printer--;
		}
		// Print a new line
		printf("\n");
	}

	// Pause for user
	PAUSE;
}