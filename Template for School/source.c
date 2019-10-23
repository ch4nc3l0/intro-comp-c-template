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
int squareRoot();



/***********************************
		Global Variables
***********************************/


/***********************************
		Main Function
***********************************/
main() {
	// Variable Declaration
	char userInput;

	// Print instructions for user
	printMenu();
	// Get user input
	scanf(" %c", &userInput);

	// Create loop
	while (userInput != 'Q') {

		// Create switch menu
		switch (userInput)
		{
		case 'R': 
			printf("R input");
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
void printMenu() {
	printf("***** Main Menu *****\n");
	printf("[R]aise a number to a power\n");
	printf("[S]quare root of a number\n");
	printf("[T]riangle printout\n");
	printf("[Q]uit the program\n");
}