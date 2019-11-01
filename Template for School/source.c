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
	int validInput = 0; // Set valid input to false 0=false 1=true


	while (validInput = 0) {
		printMenu(); // Print main menu
		scanf(" %c", &userChar); // Get user char input & assign to userChar
		validInput = getValidCharInput(userChar); // Check if input was valid
	}



	// Get user input
	scanf(" %c", &userChar);

	// Validate input

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

// Validate input
