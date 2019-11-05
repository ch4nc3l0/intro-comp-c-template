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
int avgArr(int arr[], int arrSize); // Calculate average of the nums in an array
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
	int sumResult;
	int avgResult;


	// Get user input for switch menu
	userChar = getValidCharInput();
	
	// While input is not quit run switch
	while (userChar != 'Q') {
		// Switch main menu
		switch (userChar) {
		case 'E':
			// Run add to array
			arrSize = addToArr(arr, arrSize);// Store size of arr to pass to other functions
			break;
		case 'S':
			// Display sum of all nums
			sumResult = sumArr(arr, arrSize);// Don't need to store var, but it's possible
			break;
		case 'A':
			// Display avg of all nums
			avgResult = avgArr(arr, arrSize);// Don't need to store var, but it's possible
			break;
		case 'D':
			// Display all nums entered
			showArr(arr, arrSize);
			break;
		}

		// Get new char at the end of switch
		userChar = getValidCharInput();

	} // Continue to run app while Q is not entered

	// Run QuitAPP if Q is entered
	printMenu(7);

	

	// Pause for the user to see results
	PAUSE;
} // end of main

/***********************************
		Function Definitions
***********************************/

// Print menu function
void printMenu(int i) {
	switch (i) {

	case 1:// PRINT MAIN MENU
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

	case 2:// PRINT ADD TO ARRAY MENU
		printf("]================================[\n");
		printf("]         ENTER A NUMBER         [\n");
		printf("]       TO ADD TO THE LIST       [\n");
		printf("]================================[\n");
		break;

	case 3:// PRINT PROMT TO ASK USER TO INPUT ANOTHER NUMBER
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

	case 4:// PRINT ADD ARRAY MENU
		printf("     +---------------------------+\n");
		printf("     |      Add ALL NUMBERS      |\n");
		printf("     +---------------------------+\n");
		printf("+-------------------------------------+\n");
		printf("|       ALL NUMBERS ADD UP TO:        |\n");
		printf("+-------------------------------------+\n");
		break;

	case 5: // Print dispArr menu
		printf("     +---------------------------+\n");
		printf("     |    DISPLAY ALL NUMBERS    |\n");
		printf("     +---------------------------+\n");
		printf("+-------------------------------------+\n");
		printf("|    ALL NUMBERS ENTERED SO FAR:      |\n");
		printf("+-------------------------------------+\n");
		break;

	case 6: // Print Invalid input message
		printf("    ******************************\n");
		printf("    **    NOT A VALID INPUT     **\n");
		printf("    **  READ MENU TO SEE VALID  **\n");
		printf("    **      INPUT OPTIONS       **\n");
		printf("    ******************************\n");
		break;

	case 7: // Print goodbye message
		printf("    ******************************\n");
		printf("    **    GOODBYE, THANK YOU    **\n");
		printf("    **    FOR USING THE APP!    **\n");
		printf("    **      SEE YOU SOON!       **\n");
		printf("    ******************************\n");
		break;

	case 8: // Print avgArr menu
		printf("     +---------------------------+\n");
		printf("     |   CALCULATE AVG OF NUMS   |\n");
		printf("     +---------------------------+\n");
		printf("+-------------------------------------+\n");
		printf("|     AVG OF ALL NUMBERS ENTERED:     |\n");
		printf("+-------------------------------------+\n");
		break;

	case 9:	// Print array limit warning message
		printf("]********************************[\n");
		printf("]    Warning: This app can only  [\n");
		printf("]     Accept up to 1000 inputs   [\n");
		printf("]********************************[\n");
		break;

	case 10: // Print array limit reached message
		printf("    **** Array Limit Reached!! ****    \n");
		printf(" **** Last Input will not be added ****\n");
		printf("+-------------------------------------+\n");
		printf("|  Would you like to restart program? |\n");
		printf("+-------------------------------------+\n");
		printf("|                                     |\n");
		printf("|  (Y) will reset all inputs          |\n");
		printf("|  (N) will go back to main menu      |\n");
		printf("|                                     |\n");
		printf("+-------------------------------------+\n");
		break;
	}
} // Print the menu based on situation (main print function of application)

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
	char programRestart;
	int validChar = 0;

	// Clear previous screen
	CLS;

	// Print addToArr menu
	printMenu(2);
	if (arrSize > 800) {
		printMenu(9);
	}// If arraySize is near the 1000 input limit start displaying a warning to let the user know of the limit
	printf("\n Your New Number: "); // Print Instructions for adding a number to the array

	// Check if input is a number
	while (scanf(" %i", &userInt) != 1) {
		while (getchar() != '\n') {
			CLS;
			printMenu(6); // Prints invalid message
			printMenu(2); // Prints addToArr message
		} // Clears any bad input from scanf & prints menu again
	} // If input is not a number loop forever

	// Add to array if valid input
	if (arrSize <= 1000) {
		arr[arrSize] = userInt;
		printf("%i added to the array\n", arr[arrSize]);
		printf("Array Size: %i\n", arrSize);
		arrSize++;
		// Pause for the user to see results
		PAUSE;
	}// If the arrSize is under 1000 add user input into the array, and add one to the arraysize to keep track of it
	else {
		CLS;// Clear screen
		printMenu(10);// Print input limit reached menu

		while (scanf(" %c", &programRestart)) {
			programRestart = toupper(programRestart);// Regulate input for easier validation
			if (programRestart == 'Y') {
				return 0;
			}// Return 0 to reset arraySize, this will make it seem as program was reset  
			else if (programRestart == 'N') {
				return arrSize;
			}// Stop user from input more num, but allow to use other funcs 
			else{
				CLS;
				printMenu(6);
				printMenu(10);
			}// Print invalid input
		}// Check if input is a char
		
	}// Stop input at 1000 numbers

	CLS;
		// Ask the user to enter another int
		
		printMenu(3);// Print goAgain menu
		while (scanf(" %c", &goAgain)) {
			goAgain = toupper(goAgain);
			if (goAgain == 'Y') {
				validChar = 1;
				addToArr(arr, arrSize);
			}// If y input get out of loop, call function again with updated params
			else if (goAgain == 'N') {
				validChar = 1;
				return arrSize;
			}// If N input return new arrSize and go back to main menu
			else {
				CLS; // Clear screen
				printMenu(6);// Print error message
				printMenu(3);// Print goAgain menu
			}// If invalid input print error message and get input again
		}
}// Fuction mainly adds to array, checks if inputs are valid, and checks if arrSize is over limit

void showArr(int arr[], int arrSize) {

	CLS; // Clear input
	printMenu(5); // Print display arr menu

	for (int i = 0; i < arrSize; i++) {
		printf("%i: %i\n", i, arr[i]);
	}// Print out every number in arr

	// Pause for the user to see results
	PAUSE;
}// Show all num in the array

int sumArr(int arr[], int arrSize) {
	// Declare Var
	int sumResult = 0;

	CLS; // Clear screen of any previous printf

	// Print Menu
	printMenu(4);

	for (int i = 0; i < arrSize; i++) {
		sumResult += arr[i];
	}// Loop through array and add to sumResult variable

	// Check if arrSize is empty
	if (arrSize == 0) {
		printf("**** Please input a number before finding the sum ****\n");
	}// If arr is empty print message to the user
	else {
		printf("+-------------------------------------+\n");
		printf("              %i\n", sumResult);
		printf("+-------------------------------------+\n");
	}// if arr is not empty print result

	// Pause for the user to see results
	PAUSE;

	// Return sumResult
	return sumResult;
}// Function to add the sum of an array

int avgArr(int arr[], int arrSize) {
	int sumResult = 0;
	int avgResult = 0;

	CLS; // Clear screen from prev functions

	printMenu(8); // Print avgArr menu

	// Loop to find sum
	for (int i = 0; i < arrSize; i++) {
		sumResult += arr[i];
	}

	// Check if arrSize is empty
	if (arrSize == 0) {
		printf("**** Please input a number before finding the average ****\n");
	}// if arr empty print message to user
	else {
		avgResult = sumResult / arrSize;
		printf("+-------------------------------------+\n");
		printf("              %i\n", avgResult);
		printf("+-------------------------------------+\n");
	}// if not empty find avg
	
	// Pause for the user to see results
	PAUSE;

	// Return avgResult
	return avgResult;
}// Function to find the average of an array