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

/***********************************
		Global Variables
***********************************/
// NONE

/***********************************
				Main
***********************************/
main() {
	srand(time(0)); // Generate random seed of number
// Set variables
/*	int a = 1;
	int b = 1;
	int c = 1;*/
	printMenu();


	CLS;
	printFinishLine();
	carA(1);

	CLS;
	printFinishLine();
	carMover(randomGen());
		

	
	




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
	

}

int randomGen() {
	int num = rand() % 10; // Generate random number 0-9
	return num;
} // Random number function

void carA(int a) {
	int i = a;
	while (i > 0) {
		printf("A");
		i--;
	}
	
	
}
void carB(int b) {
	printf("B");
	
}
void carC(int c) {
	printf("C");
	
}

void printFinishLine() {
	printf("                                                                                ");
	printf(" ______\n");
	printf("                                                                                ");
	printf("|Finish|\n");
	printf("                                                                                ");
	printf("|/Line\\|\n");
	printf("                                                                                ");
	printf("|\n");
	printf("                                                                                ");
	printf("|\n");
	printf("                                                                                ");
	printf("|\n");
} // Generate finish line flag 80 spaces away

void delay(int time) {
	int milSec = 250 * time; // Convert to 1/4 of a millisecond
	clock_t startTime = clock(); // Store the start time
	while (clock() < startTime + milSec) {
		;
	} // Loop until delay is reached

}

void carMover(int spaceNum) {
	int a = 1;
	int b = 1;
	int c = 1;
/*
if num 0-11 move a 1 space
if num 12-23 move a 2 space
if num 24-35 move a 3 space
if num 36-47 move b 1 space
if num 48-59 move b 2 space
if num 60-71 move b 3 space
if num 72-83 move c 1 space
if num 84-95 move c 2 space
if num 96-107 move c 3 space
*/
	while ((a != 80)||(b != 80)||(c != 80)){
		
		switch (spaceNum) {
			case 0: printf("0");
				break;
			case 1: printf("1");
				break;
			case 2: printf("2");
				break;
			case 3: printf("3");
				break;
			case 4: printf("4");
				break;
			case 5: printf("5");
				break;
			case 6: printf("6");
				break;
			case 7: printf("7");
				break;
			case 8: printf("8");
				break;
			case 9: printf("9");
				break;
		}
		spaceNum = randomGen();
		delay(1);
	}
}