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


	

	PAUSE;
} // end of main

/***********************************
		Function Definitions
***********************************/
void printMenu() {
	printf("***** Main Menu *****");
	printf("[R]aise a number to a power");
	printf("[S]quare root of a number");
	printf("[T]riangle printout");
	printf("[Q]uit the program");
}