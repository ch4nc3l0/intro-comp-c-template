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
void inputValidator(); // Validate user inputs


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

	// Print main menu

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

void printMenu() {
	printf("__________________________");
}

/*

|\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\|
|         ** Main Menu **           |
|     Enter one of the commands     |
|            to continue            |
| _________________________________ |
||                                 ||
|| 1. [E]nter a new number         ||
|| 2. [S]um all numbers entered    ||
|| 3. [A]verage all numbers entered||
|| 4. [D]isplay all numbers entered||
|| 5. [Q]uit the application       ||
||_________________________________||
|                                   |
|\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\|


*/              