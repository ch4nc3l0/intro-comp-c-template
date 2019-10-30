//**************************************************************
//...Written by..: Chance Gurley
//...Date Written: OCT 29, 2019
//...Purpose.....: Programming class
//**************************************************************
/*
GOALS OF EDIT
=============
1: Get rid of array 
2: Fix prime 
3: Edit sumResult 
4: Add comments after every }  
*/
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
	int sumResult = 0;
	int largest;
	int lowest;
	int counter = 1;
	int average;
	float productResult = 1;

	// Print progam instructions
	printf("This app will output facts about the numbers that are input to the program\n");

	// Get user input for the first time
	printf("Input a number from -50 to 100 or enter -999 to quit the application\n");
	scanf(" %i", &userInput);

	while (userInput != -999) {

		while ((userInput < -50) || (userInput > 100)) {
			printf("Please enter a valid input\n");
			scanf("%i", &userInput);
		} // Verify user input

		sumResult += userInput; // Find sum of numbers
		printf("The sum of the numbers is %i\n", sumResult); // Print sum of numbers

		
		productResult *= userInput; // Print Product of numbers
		printf("The product of the numbers is %.0f\n", productResult); // Print product of numbers

		if (counter == 1) {
			largest = userInput;
			lowest = userInput;
		} // If first time in loop, set lowest and largest var to userInput
		
		if (largest < userInput) {
			largest = userInput;
		} // Find the largest number
		printf("The highest of the numbers is %i\n", largest); // Print the largest number

		
		if (lowest > userInput) {
			lowest = userInput;
		} // Find the lowest number
		printf("The lowest of the numbers is %i\n", lowest); // Print the lowest number

		average = sumResult / counter; // Find the average of the numbers
		printf("The average of the numbers is %i\n", average); // Print the average of the numbers

		printf("You have entered %i numbers\n", counter); // Print how many numbers were input

		if (userInput % 2 == 0) {
			printf("The number %i is an even number\n", userInput);	// Print number is even
		} // If num is divisable by 2 print even
		else {
			printf("The number %i is an odd number\n", userInput); // Print number is odd
		} // If num is not divisable it is odd
		
		
		if (userInput < 1) {
			isPrime = 0;
		} // Check if userInput is negitive or 1 => not a prime number 
		else {
			isPrime = 1;
		} // If userInput is greater than 1 run check to see if prime

		for (int i = 2; i < userInput; i++) {
			if ((userInput % i) == 0) {
				isPrime = 0;
			} // Check every number up to userInput to check if it is divisible by something other than 1 evenly
		} // Loop to go through every number up to userInput
		
		if (isPrime == 1) {
			printf("The number %i is a prime number\n", userInput);
		} // If isPrime is true print is prime
		else {
			printf("The number %i is not a prime number\n", userInput);
		} // If isPrime is false print not prime

		// Counter + 1 to keep track of number of valid inputs recieved
		counter++;

		// End of operations
		PAUSE;
		CLS;

		// Get input again to start cycle over
		printf("Input a number from -50 to 100 or enter -999 to quit the application\n");
		scanf(" %i", &userInput);

	} // While program is not at end condition run code

	PAUSE;
} // end of main
