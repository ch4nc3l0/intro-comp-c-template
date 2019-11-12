//**************************************************************
//...Written by..: Chance Gurley
//...Date Written: NOV 12, 2019
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
void printMenu();
void displayHandler(char arr[]);
int inputHandler(char arr[]);
int getRestart();

/***********************************
		Global Variables
***********************************/
// NONE

/***********************************
				Main
***********************************/
main() {
	// Declare variables
	char userWord[47]; // Declare userword array with limit of 46 char
	int validInput = 0; // Keep track if the input recieved is valid
	int restart = 1;

	do {
		// Print menu **function**
		printMenu();

		// Get user word / Add to array **function**
		do {
			validInput = inputHandler(userWord);
		} while (validInput == 0);

		// Display array 1- the same way user typed it 2- backwards 3- vertically 4- upside down vertical **function**
		displayHandler(userWord);

		// Restart?
		restart = getRestart();
	} while (restart = 1);

	// Goodbye

	PAUSE;
} // end of main

/***********************************
		Function Definitions
***********************************/
// Print menu
void printMenu() {
	printf("\n\n");
	printf("\t\t +---------------------------+\n");
	printf("\t\t | Welcome To Printing Chars |\n");
	printf("\t\t |---------------------------|\n");
	printf("\t\t |                           |\n");
	printf("\t\t |   Please enter one word   |\n");
	printf("\t\t |         to start          |\n");
	printf("\t\t |                           |\n");
	printf("\t\t +---------------------------+\n");
	printf("\t\t Your Input: ");
}

// inputHandler
int inputHandler(char arr[]) {
	int strLen;
	
	// Get user input
	scanf("%[^\n]%*c", arr); // Get full input [] tells scan what char I want to look for, \n = end input after enter is pressed.
	strLen = strlen(arr);// Get string length

	if (strLen >= 46) {
		CLS;
		printf("\n");
		printf("\t******************************************\n");
		printf("\t**  You entered a word that is longer   **\n");
		printf("\t**     than any word in any major       **\n");
		printf("\t**     english dictionary, Please       **\n");
		printf("\t**       enter one valid word           **\n");
		printf("\t******************************************\n");
		printMenu();
		return 0;
	}

	for (int i = 0; i <= strLen; i++) {
		if (isdigit(arr[i])) {
			CLS;
			printf("\n");
			printf("\t******************************************\n");
			printf("\t**            DIGIT IN INPUT            **\n");
			printf("\t**        Please enter ONE word         **\n");
			printf("\t******************************************\n");
			printMenu();
			return 0;
		}// Check each char in string, if one is a digit the user did not input a number.

		else if (arr[i] == ' ') {
			CLS;
			printf("\n");
			printf("\t******************************************\n");
			printf("\t**            SPACE IN INPUT            **\n");
			printf("\t**         Please enter ONE word        **\n");
			printf("\t******************************************\n");
			printMenu();
			return 0;
		}// Check each char, if their is a space it cannot be one word.
	}// Check each character in string

	// Input was valid
	return 1;

}

// displayHandler
void displayHandler(char arr[]) {
	// Init variables
	int strLen;
	
	CLS;// Clear screen
	printf("\n\n");// Prep for other printf

	strLen = strlen(arr); // Keep track of string length

	// Print normal
	printf("\t\t The word is\n");
	printf("\t\t -----------\n");
	printf("\t\t %s\n\n", arr);

	// Print in reverse
	printf("\t\t The word backwards is\n");
	printf("\t\t ---------------------\n");
	printf("\t\t");
	for (int i = strLen; i >= 0; i--) {
		printf("%c", arr[i]);
	}// Print each char in array backwards by working at max arr then subtracting
	printf("\n\n");

	// Print vertical
	printf("\t\t The word vertically is\n");
	printf("\t\t ----------------------\n");
	for (int i = 0; i <= strLen; i++) {
		printf("\t\t %c\n", arr[i]);
	}// Print each char in array with a \n to look vertical
	

	// Print vertical reverse
	printf("\t\t The word vertically in reverse is\n");
	printf("\t\t ---------------------------------");
	for (int i = strLen; i >= 0; i--) {
		printf("\t\t %c\n", arr[i]);
	}// Print each char in array with a \n to look vertical, but do it backwards starting at arrMAX
	printf("\n\n");
	
	// Pause app to let the user view results
	PAUSE;
}

// Ask user if they want to restart
int getRestart() {

}