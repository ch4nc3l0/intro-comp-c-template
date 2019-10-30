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
void printMenu();
int randomGen();
void carA(int a);
void carB(int b);
void carC(int c);
void printFinishLine();

/***********************************
		Global Variables
***********************************/
// NONE

/***********************************
				Main
***********************************/
main() {
// Set variables

	printMenu();

	CLS;
	printFinishLine();
	
	printf(" %i\n", randomGen());


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
	int num;
	srand(time(0)); // Generate random seed of number
	num = rand() % 108; // Generate random number 0-107
	return num;
} // Random number function

void carA(int a) {
	for (int i = a; i > 0; i--) {
		printf("A");
	}
}
void carB(int b) {
	for (int i = b; i > 0; i--) {
		printf("B");
	}
}
void carC(int c) {
	for (int i = c; i > 0; i--) {
		printf("C");
	}
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