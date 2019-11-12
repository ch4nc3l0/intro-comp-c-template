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

/***********************************
		Global Variables
***********************************/
// NONE

/***********************************
				Main
***********************************/
main() {
	// Declare variables
	char userWord[500]; // Declare userword array with limit of 499 char
	int letterPositioner = 0; // Keeps track of where letters are stored in array

	// Print menu **function**
	printMenu();

	// Get user word / Add to array **function**

	// Display array 1- the same way user typed it 2- backwards 3- vertically 4- upside down vertical **function**



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
	printf("\t\t |    Please enter a word    |\n");
	printf("\t\t |         to start          |\n");
	printf("\t\t |                           |\n");
	printf("\t\t +---------------------------+\n");
	printf("\t\t Your Input: ");
}

// inputHandler

// displayHandler
