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
int addToArr(int arr[], int arrSize); // Add a num to an array
int avgArr(int arr); // Calculate average of the nums in an array
int sumArr(int arr[], int arrSize); // Calculate the sum of the nums in an array
void showArr(int arr[], int arrSize); // Print all nums in an array
void printMenu(); // Print the different app menus
char getValidCharInput(); // Gets a valid char input

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
	int arr[1000];
	int arrSize = 0;


	// Get user input for switch menu
	userChar = getValidCharInput();
	
	// While input is not quit run switch
	while (userChar != 'Q') {
		// Switch main menu
		switch (userChar) {
		case 'E':
			// Run add to array
			arrSize = addToArr(arr, arrSize);
			break;
		case 'S':
			// Display sum of all nums
			break;
		case 'A':
			// Display avg of all nums
			break;
		case 'D':
			// Display all nums entered
			showArr(arr, arrSize);
			break;
		}

		// Get new char at the end of switch
		userChar = getValidCharInput();

	} // Continue to run app while Q is not entered

	// Run QuitAPP

	


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

	// CASE 3 PRINT PROMT TO ASK USER TO INPUT ANOTHER NUMBER
	case 3:
		printf(" //_-_-_-_-_-_-_-_-_-_-//\n");
		printf(" //                    //\n");
		printf(" //   Would you like   //\n");
		printf(" //      to input      //\n");
		printf(" //   another number?  //\n");
		printf(" //    (Y)es or (N)o   //\n");
		printf(" //                    //\n");
		printf(" //_-_-_-_-_-_-_-_-_-_-//\n");
		printf("\n Your Response: ");
		break;

	// CASE 4 PRINT ADD ARRAY MENU
	case 4:
		printf("     +---------------------------+\n");
		printf("     |      Add ALL NUMBERS      |\n");
		printf("     +---------------------------+\n");
		printf("+-------------------------------------+\n");
		printf("|       ALL NUMBERS ADD UP TO:        |\n");
		printf("+-------------------------------------+\n");
		break;

	case 5:
		printf("     +---------------------------+\n");
		printf("     |    DISPLAY ALL NUMBERS    |\n");
		printf("     +---------------------------+\n");
		printf("+-------------------------------------+\n");
		printf("|    ALL NUMBERS ENTERED SO FAR:      |\n");
		printf("+-------------------------------------+\n");
		break;



	// CASE 6 PRINT ERROR MESSAGE
	case 6:
		printf("    ******************************\n");
		printf("    **    NOT A VALID INPUT     **\n");
		printf("    **  READ MENU TO SEE VALID  **\n");
		printf("    **      INPUT OPTIONS       **\n");
		printf("    ******************************\n");
		break;

	case 7:

		break;
	}
} // Print the main menu


// Get a vaild char from the user
char getValidCharInput() {
	// Declare Var
	char userChar;
	int validChar = 0; // Set validChar to false 0=false 1=true

	CLS; // Clear screen just in case coming from previous function

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
			printMenu(6); // Print invalid input
		} // If no match the input must be invalid
	} // While no valid input continue loop
	return userChar; // Return the valid userChar
} // Function returns a valid char for the menu application


int addToArr(int arr[], int arrSize) {
	// Declare Var
	int userInt;
	char goAgain;
	int validChar = 0;

	// Clear previous screen
	CLS;

	// Print addToArr menu
	printMenu(2);

	// Check if input is a number
	while (scanf(" %i", &userInt) != 1) {
		while (getchar() != '\n') {
			CLS;
			printMenu(6); // Prints invalid message
			printMenu(2); // Prints addToArr message
		} // Clears any bad input from scanf & prints menu again
	} // If input is not a number loop forever

	// Add to array if valid input
	if (arrSize >= 0) {
		arr[arrSize] = userInt;

		
		printf("%i added to the array\n", arr[arrSize]);
		printf("Array Size: %i\n", arrSize);
		arrSize++;
		PAUSE;
	}
	else if (arrSize > 1000) {
		printf("Array Limit Reached!! Restart application to start again"); // Stop input at 1000 numbers
		PAUSE;
	}

	CLS;
	// Recursive call if user enters y to add another num?
	while (validChar == 0) {
		// Ask the user to enter another int
		
		printMenu(3);
		scanf(" %c", &goAgain);
		goAgain = toupper(goAgain);
		if (goAgain == 'Y'){
			validChar = 1;
			addToArr(arr, arrSize);
		}
		else if (goAgain == 'N') {
			validChar = 1;
			return arrSize;
		}
		else {
			CLS;
			printMenu(6);
		}
	}
}

// Show all num in the array
void showArr(int arr[], int arrSize) {

	CLS;
	printMenu(5);

	for (int i = 0; i < arrSize; i++) {
		printf("%i: %i\n", i, arr[i]);
	}
	PAUSE;
}