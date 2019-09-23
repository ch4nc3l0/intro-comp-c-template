//**************************************************************
//...Written by..: Chance Gurley
//...Date Written: Sep 13, 2019
//...Purpose.....: Programming class
//**************************************************************
#define _CRT_SECURE_NO_WARNINGS // Allows use of scanf instead of scanf_s
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define PAUSE system("pause")
#define CLS system("cls")

main() {
	// Set Variables
	int inputIsNumber = 0;
	int userInput;
	int half;
	int quarter;
	int dime;
	int nickle;
	int penney;
	// Print app purpose and instructions
	printf("This app will generate lowest amount of change for a number in between 1-99\n");
	printf("Please enter change amount 1-99\n");
	printf("---------------------------\n");
	// Grab user input
	while (inputIsNumber == 0) {
		scanf(" %i", &userInput);
		getchar();
		if (userInput > 99 || userInput < 1) {
			printf("Please enter a number between 1-99\n");
		}
		else {
			inputIsNumber = 1;
		}
		
	}

	do {
		if (userInput >= 50) {
			half = userInput / 50;
			userInput = userInput - half * 50;
			printf("Halfs %i, ", half);
		}
		if (userInput >= 25) {
			quarter = userInput / 25;
			userInput = userInput - quarter * 25;
			printf("Quarters %i, ", quarter);
		}
		if (userInput >= 10) {
			dime = userInput / 10;
			userInput = userInput - dime * 10;
			printf("Dimes %i, ", dime);
		}
		if (userInput >= 5) {
			nickle = userInput / 5;
			userInput = userInput - nickle * 5;
			printf("Nickles %i, ", nickle);
		}
		if (userInput >= 1) {
			penney = userInput / 1;
			userInput = userInput - penney;
			printf("Penneys %i", penney);
		}
	} while (userInput > 0);
	printf("\n");


		
		
	
	

	PAUSE;
} // end of main
