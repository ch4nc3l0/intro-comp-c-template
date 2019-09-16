//**************************************************************
//...Written by..: Chance Gurley
//...Date Written: Sep 13, 2019
//...Purpose.....: Programming class
//**************************************************************
#define _CRT_SECURE_NO_WARNINGS // Allows use of scanf instead of scanf_s
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PAUSE system("pause")
#define CLS system("cls")

main() {
	// Set Variables
	int randomAnswer;
	int userGuess; 
	// I want to challenge myself to not make a number of guesses variable
	// Generate random answer
	srand(time(0)); // Generate random numbers every time program is run
	randomAnswer = (rand() % (100 - 1 + 1)) + 1;
	// State app purpose
	printf("Guessing game can you guess a random number 1-100 with only 10 guesses?\n");
	// Prompt user to input for first attempt
	printf("Please make your first guess!\n");
	// Collect user input for first attempt
	scanf(" %i", &userGuess);
	// Start loop
	for (int i = 0; i < 10; i++) {
		// Check if user already made 10 guesses
		if (i == 9) {
			printf("Unfortunalty you lost, the number was %i\n", randomAnswer);
		}
		// Check if user guessed lower
		else if (userGuess < randomAnswer) {
			// Print you guessed lower
			printf("You guessed lower! You have %i attempts left.\n", 9 - i);
			// Get user input
			scanf(" %i", &userGuess);
		}
		// Check if user guessed higher
		else if (userGuess > randomAnswer) {
			// Print you guessed higher
			printf("You guessed higher! You have %i attempts left.\n", 9 - i);
			// Get user input
			scanf(" %i", &userGuess);
		}
		// Check if user guessed correct answer
		else if (userGuess == randomAnswer) {
			// Print you won
			printf("Congrats! You won :)\n");
			// Set i check to 12 to end loop
			i = 12;
		}

	}


		

	

	PAUSE;
} // end of main
