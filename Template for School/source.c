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
int addToArr(int num, int arr); // Add a num to an array
int avgArr(int arr); // Calculate average of the nums in an array
int sumArr(int arr); // Calculate the sum of the nums in an array
void showArr(int arr); // Print all nums in an array
void printMenu(); // Print the main menu with instructions
int getValidCharInput(char input); // Gets a valid char user returns 0 if not valid 1 if valid
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
	int avg;
	int sum;
	int result;
	int arr[1000];
	int validChar = 0; // Set validChar to false 0=false 1=true
	int validInt = 0; // setSet validInt to false 0=false 1=true


	while (validChar == 0) {
		printMenu(); // Print main menu
		scanf(" %c", &userChar); // Get user char input & assign to userChar
		userChar = toupper(userChar); // Standardize uppercase and lowercase to mean the same thing
		validChar = getValidCharInput(userChar); // Check if input was valid
		CLS; // Clear menu (if input is not valid the error message will show at the top of the menu during the next loop)
		if (validChar == 0) {
			invalidInputPrinter();
		} // If validChar is still not 1 print an error message
	} // While no valid input continue loop


	// While input is not quit run switch

		// Switch main menu

		// Enter a num

		// Display sum of all nums

		// Display avg of all nums

		// Display all nums entered

	// Get next input from user

	// Validate input & start loop again || end loop

	// After validation print main menu again

	// If we reach outside of main loop say goodbye to user, the application was closed


	PAUSE;
} // end of main

/***********************************
		Function Definitions
***********************************/

// Print menu function
void printMenu() {
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
} // Print the main menu

// Validate Char
int getValidCharInput(char input) {
	// Declare var
	int valid;


	if ((input == 'E') || (input == 'S') || (input == 'A') || (input == 'D') || (input == 'Q')) {
		valid = 1;
	}
	else {
		valid = 0;
	}

	return valid;

}

// Print invalid input message
void invalidInputPrinter() {
	printf("    ******************************\n");
	printf("    **    NOT A VALID INPUT     **\n");
	printf("    **  READ MENU TO SEE VALID  **\n");
	printf("    **      INPUT OPTIONS       **\n");
	printf("    ******************************\n");
}