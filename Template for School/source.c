//**************************************************************
//...Written by..: Chance Gurley
//...Date Written: OCT 15, 2019
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

main() {
	// Set Variables
	int userInput;
	int arr[5000];
	int counter = 1;
	int sumResult;
	int largest = -50;
	int lowest = 100;
	int average;

	// Print progam instructions
	printf("This app will output facts about the numbers that are input to the program\n");

	// Get user input for the first time
	printf("Input a number from -50 to 100\n");
	scanf(" %i", &userInput);

	// While program is not at end condition run code
	while (userInput != -999) {

		// Verify user input
		while ((userInput < -50) || (userInput > 100)) {
			printf("Please enter a valid input\n");
			scanf("%i", &userInput);
		}
		
		// Add valid number to the array
		arr[counter] = userInput;

		// Print sum of numbers
		sumResult = 0; // Reset result each time a new input is recieved
		for (int i = counter; i>0;  i--){
			sumResult += arr[i];
		}
		printf("The sum of the numbers is %i\n", sumResult);

		// Print the largest number
		if (largest < userInput) {
			largest = userInput;
		}
		printf("The highest of the numbers is %i\n", largest);

		// Print the lowest number
		if (lowest > userInput) {
			lowest = userInput;
		}
		printf("The lowest of the numbers is %i\n", lowest);

		// Print the average of the numbers
		average = sumResult / counter;
		printf("The average of the numbers is %i\n", average);

		// Print how many numbers were input
		printf("You have entered %i numbers\n", counter);

		// Print if number is even or odd
		if (userInput % 2 == 0) {
			printf("The number %i is an even number\n", userInput);
		}
		else {
			printf("The number %i is an odd number\n", userInput);
		}
		
		// Print if prime number
		int isPrime = 1;
		for (int c = 2; c < userInput; c++) {
			if ((userInput % c) == 0){
				isPrime = 0;
			}
		}
		if (isPrime == 1) {
			printf("The number %i is a prime number\n", userInput);
		}
		else {
			printf("The number %i is not a prime number\n", userInput);
		}

		// Counter + 1 to keep track of array size
		counter++;
		// End of operations
		PAUSE;
		CLS;

		// Get input again to start cycle over
		printf("Input a number from -50 to 100\n");
		scanf(" %i", &userInput);
	}

	

	PAUSE;
} // end of main
