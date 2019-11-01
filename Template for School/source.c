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
void printInputError(); // Clear screen and instruct user to input valid input


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




	PAUSE;
} // end of main

/***********************************
		Function Definitions
***********************************/
