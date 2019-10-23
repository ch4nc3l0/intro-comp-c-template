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
#define PAUSE system("pause")
#define CLS system("cls")

/***********************************
		Function Prototypes
***********************************/
void printMenu();
int raisePower();
int squareRoot(int);



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

	// Create menu loop
	while (userInput != 'Q') {

		// Create switch menu
		switch (userInput)
		{
		case 'R': 
			raisePower();
			CLS;
			printMenu();
			break;
		case 'S': 
			printf("S input");
			break;
		case 'T': 
			printf("T Input");
			break;
		default: 
			CLS;
			printf("Input is not valid, Please enter valid input\n");
			printMenu();
			break;
		}

		// Get New User Input
		scanf(" %c", &userInput);
		
	}
	

	PAUSE;
} // end of main

/***********************************
		Function Definitions
***********************************/
// Print menu function
void printMenu() {
	printf("***** Main Menu *****\n");
	printf("[R]aise a number to a power\n");
	printf("[S]quare root of a number\n");
	printf("[T]riangle printout\n");
	printf("[Q]uit the program\n");
}

// raisePower function
int raisePower() {
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
	if ((num < 1 || num > 20) || (power < 1 || power > 10)) {
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