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
void printMenu(); // Print begging menu
void carA(int a); // Print car A
void carB(int b); // Print car B
void carC(int c); // Print car C
void printFinishLine(); // Print the finish line flag
void delay(int time); // Generate a delay in time
int randomGen(); // Generate rand numbers
void carMover(int spaceNum); // Move cars based on rand generator
void findWinner(int a, int b, int c); // Find what car came in 1st | 2nd | 3rd

/***********************************
		Global Variables
***********************************/
// NONE

/***********************************
				Main
***********************************/
main() {
	char restartRace = 'Y'; // Track if user entered "N"

	srand(time(0)); // Generate random seed of number

	
	

	while (restartRace == 'Y'){ 
		printMenu();
		CLS;
		printFinishLine();
		carMover(randomGen());
		printf("\n\n");
		printf("\t\t Would you like to restart the race? (Y/N)");
		scanf(" %c", &restartRace);
		restartRace = toupper(restartRace);
		while (restartRace != 'N' && restartRace != 'Y') {
			CLS;
			printf("Please enter Y to restart the race or N to close the program\n");
			scanf(" %c", &restartRace);
			restartRace = toupper(restartRace);
		}
		CLS;
	}

	// Print closing message
	printf("\n\n");
	printf("\t\t**************************\n");
	printf("\t\t**Thank you for visiting**\n");
	printf("\t\t**   Chance's Speedway  **\n");
	printf("\t\t**************************\n");
	




	
	




	PAUSE;
} // end of main

/***********************************
		Function Definitions
***********************************/
void printMenu() {
	printf("\n\n");
	printf("\t\t==================================\n");
	printf("\t\t== Welcome To Chance's Speedway ==\n");
	printf("\t\t==================================\n");
	printf("\n\n\n");
	printf("\t\t***********************************\n");
	printf("\t\t  ");
	PAUSE;
} // Print main menu

int randomGen() {
	int num = rand() % 9; // Generate random number 0-8
	return num;
} // Random number function

void carA(int a) {
	while (a > 0) {
		printf("A");
		a--;
	}
} // Print car a (a) amount of times

void carB(int b) {
	while (b > 0) {
		printf("B");
		b--;
	}
} // Print car b (b) amount of times

void carC(int c) {
	while (c > 0) {
		printf("C");
		c--;
	}
} // Print car c (c) amount of times

void printFinishLine() {
	printf("                                                                               ");
	printf(" ______\n");
	printf("                                                                               ");
	printf("|Finish|\n");
	printf("                                                                               ");
	printf("|/Line\\|\n");
	printf("                                                                               ");
	printf("|\n");
	printf("                                                                               ");
	printf("|\n");
	printf("                                                                               ");
	printf("|\n");
} // Generate finish line flag 80 spaces away

void delay(int time) {
	int deltime = 100 * time;
	clock_t startTime = clock(); // Store the start time
	while (clock() < startTime + deltime) {
		;
	} // Loop until delay is reached

}

void carMover(int spaceNum) {
	// Init variables
	int a = 1;
	int b = 1;
	int c = 1;
	char winner;
	char second;
	char loser;

	while (a < 80 && b < 80 && c < 80) {

		switch (spaceNum) {
		case 0: a++;
			break;
		case 1: a += 2;
			break;
		case 2: a += 3;
			break;
		case 3: b++;
			break;
		case 4: b += 2;
			break;
		case 5: b += 3;
			break;
		case 6: c++;
			break;
		case 7: c += 2;
			break;
		case 8: c += 3;
			break;
		} // Using randonGen figure out what car and how many spaces to move
		spaceNum = randomGen(); // Get a new random number
		delay(1); // Create a small delay for user to see race clearly

		CLS;
		printFinishLine();
		printf("\n\n");
		printf("-------------------------------------------------------------------------------|\n");
		carA(a);
		printf("\n");
		printf("-------------------------------------------------------------------------------|\n");
		carB(b);
		printf("\n");
		printf("-------------------------------------------------------------------------------|\n");
		carC(c);
		printf("\n");
		printf("-------------------------------------------------------------------------------|\n");
	} // Loop while no number is 80

	findWinner(a, b, c); // Find and print out the winners

}

void findWinner(int a, int b, int c) {

	printf("\n\n\n");
	printf("\t\t****************************\n");

	// Find largest || winner
	if (a > b && a > c) {
		printf("\t\t****   First Place: A   ****\n");
	} // a is the largest
	else if (b > c) {
		printf("\t\t****   First Place: B   ****\n");
	} // b is the largest
	else {
		printf("\t\t****   First Place: C   ****\n");
	} // c is the largest

	// Find middle || second
	if ((a > b && a < c) || (a > c && a < b)) {
		printf("\t\t****   Second Place: A  ****\n");
	} // a is the middle
	else if ((b > a && b < c) || (b > c && b < a)) {
		printf("\t\t****   Second Place: B  ****\n");
	} // b is the middle
	else {
		printf("\t\t****   Second Place: C  ****\n");
	} // c is the middle

	// Find last || third
	if (a < b && a < c) {
		printf("\t\t****   Third place: A   ****\n");
	} // a is the smallest
	else if (b < c) {
		printf("\t\t****   Third place: B   ****\n");
	} // b is the smallest
	else {
		printf("\t\t****   Third place: C   ****\n");
	} // c is the smallest

	printf("\t\t****************************\n");
} // Find the winner then print out the correct statement