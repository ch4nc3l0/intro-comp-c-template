//**************************************************************
//...Written by..: Chance Gurley
//...Date Written: OCT 29, 2019
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

/***********************************
		Function Prototypes
***********************************/
int addToArr(); // Add a num to an array
int avgArr(int arr); // Calculate average of the nums in an array
int sumArr(int arr); // Calculate the sum of the nums in an array
void showArr(int arr); // Print all nums in an array
void printMenu(); // Print the main menu with instructions
char getValidCharInput(); // Gets a valid char input
void invalidInputPrinter(); // Prints to screen if input is invalid

/***********************************
		Global Variables
***********************************/
// NONE

/***********************************
				Main
***********************************/
main() {
	// Declare variables
	char userChar;
	int userInt;
	int arr[1000];


	userInt = addToArr();
	userChar = addToArr();
	
	/*
	// Get user input
	userChar = getValidCharInput();
	
	// While input is not quit run switch
	while (userChar != 'Q') {
		// Switch main menu
		switch (userChar) {
		case 'E':
			// Enter a num
			break;
		case 'S':
			// Display sum of all nums
			break;
		case 'A':
			// Display avg of all nums
			break;
		case 'D':
			// Display all nums entered
			break;
		}

		// Get new char at the end of switch
		userChar = getValidCharInput();

	} // Continue to run app while Q is not entered

	// Run QuitAPP

	*/


	PAUSE;
} // end of main

/***********************************
		Function Definitions
***********************************/

// Print menu function
void printMenu(int i) {
	switch (i) {

	// CASE 1 PRINT MAIN MENU
	case 1:
		printf("|\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\|\n");
		printf("|         ** Main Menu **           |\n");
		printf("|     Enter one of the commands     |\n");
		printf("|            to continue            |\n");
		printf("| _________________________________ |\n");
		printf("||                                 ||\n");
		printf("|| 1. [E]nter a new number         ||\n");
		printf("|| 2. [S]um all numbers entered    ||\n");
		printf("|| 3. [A]verage all numbers entered||\n");
		printf("|| 4. [D]isplay all numbers entered||\n");
		printf("|| 5. [Q]uit the application       ||\n");
		printf("||_________________________________||\n");
		printf("|                                   |\n");
		printf("|\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\|\n");
		printf("\n");
		printf("Your Command: ");
		break;

	// CASE 2 PRINT ADD TO ARRAY MENU
	case 2:
		printf("]================================[\n");
		printf("]         ENTER A NUMBER         [\n");
		printf("]       TO ADD TO THE LIST       [\n");
		printf("]================================[\n");
		printf("]********************************[\n");
		printf("]    Warning: This app can only  [\n");
		printf("]     Accept up to 1000 inputs   [\n");
		printf("]********************************[\n");
		printf("\n Your New Number: "); // Print Instructions for adding a number to the array
		break;
	}
} // Print the main menu


// Get a vaild char from the user
char getValidCharInput() {
	// Declare Var
	char userChar;
	int validChar = 0; // Set validChar to false 0=false 1=true

	while (validChar == 0) {
		printMenu(1); // Print main menu
		scanf(" %c", &userChar); // Get user char input & assign to userChar
		userChar = toupper(userChar); // Standardize uppercase and lowercase to mean the same thing
		CLS; // Clear menu (if input is not valid the error message will show at the top of the menu during the next loop)
		if ((userChar == 'E') || (userChar == 'S') || (userChar == 'A') || (userChar == 'D') || (userChar == 'Q')) {
			validChar = 1;
		} // If the input matches one of the menu options the input is valid
		else {
			validChar = 0;
			invalidInputPrinter(); // Print invalid input
		} // If no match the input must be invalid
	} // While no valid input continue loop
	return userChar; // Return the valid userChar
} // Function returns a valid char for the menu application


// Print invalid input message
void invalidInputPrinter() {
	printf("    ******************************\n");
	printf("    **    NOT A VALID INPUT     **\n");
	printf("    **  READ MENU TO SEE VALID  **\n");
	printf("    **      INPUT OPTIONS       **\n");
	printf("    ******************************\n");
} // Print a nicely spaced error message for the user

int addToArr() {
	// Declare Var
	int userInt;
	int validInput = 0;

	printMenu(2);

	// Check if input is vaild
	while (scanf(" %i", &userInt) != 1) {
		while (getchar() != '\n') {
			CLS;
			invalidInputPrinter();
			printMenu(2);
		}
	}

	// Add to array if valid input


	// Recursive call if user enters y to add another num?
	addToArr();

	return userInt;
}
