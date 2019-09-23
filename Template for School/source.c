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
	int randomNumbers[10];
	int userInput;
	int changeLeftover;
	int half;
	int quarter;
	int dime;
	int nickle;
	int penney;
	// Print app purpose and instructions
	printf("This app will generate 10 random numbers between 1-99 and give change in the lowest amount of change\n");
	printf("Press enter key to begin\n");
	printf("---------------------------");
	getchar();
	// Generate random numbers
	srand(time(0)); // Generate random numbers every time program is run
	// Loop 10 times
	for (int i = 0; i < 10; i++) {
		randomNumbers[i] = (rand() % (99 - 1 + 1)) + 1;
		printf("Get change for %i cents:\n", randomNumbers[i]);
		

		while (randomNumbers[i] > 0) {

			if (randomNumbers[i] >= 50) {
				half = randomNumbers[i] / 50;
				randomNumbers[i] =  randomNumbers[i] - half * 50;
				printf("Halfs %i, ", half);
			}
			if (randomNumbers[i] >= 25) {
				quarter = randomNumbers[i] / 25;
				randomNumbers[i] =  randomNumbers[i] - quarter * 25;
				printf("Quarters %i, ", quarter);
			}
			if (randomNumbers[i] >= 10) {
				dime = randomNumbers[i] / 10;
				randomNumbers[i] = randomNumbers[i] - dime * 10;
				printf("Dimes %i, ", dime);
			}
			if (randomNumbers[i] >= 5) {
				nickle = randomNumbers[i] / 5;
				randomNumbers[i] = randomNumbers[i] - nickle * 5;
				printf("Nickles %i, ", nickle);
			}
			if (randomNumbers[i] >= 1) {
				penney = randomNumbers[i] / 1;
				randomNumbers[i] = randomNumbers[i] - penney;
				printf("Penneys %i", penney);
			}
		}
		if (randomNumbers[i] == 0) {
			printf("\n---------------------------\n");
		}
		
	}
	

	PAUSE;
} // end of main
