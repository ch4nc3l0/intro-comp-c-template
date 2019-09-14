//**************************************************************
//...Written by..: Chance Gurley
//...Date Written: Sep 13, 2019
//...Purpose.....: Programming class
//**************************************************************
#define _CRT_SECURE_NO_WARNINGS // Allows use of scanf instead of scanf_s
#include <stdio.h>
#include <stdlib.h>
#define PAUSE system("pause")
#define CLS system("cls")

main() {
	// Assign variables
	char firstChar = 'x';
	char secondChar = 'x';
	char thirdChar = 'x';
	// Print app purpose
	printf("This app will output a result based on your input\n");
	// Get user input
	printf("Input First Character\n");
	scanf(" %c", &firstChar);
	printf("Input Second Character\n");
	scanf(" %c", &secondChar);
	printf("Input Third Character\n");
	scanf(" %c", &thirdChar);
	// Decision statements
	// -------------------
	// If firstchar and secondchar is equal as long as thirdchar is not a Z
	if ((firstChar == secondChar) && (thirdChar != 'Z')) {
		printf("Happy\n");
	}
	// If firstchar comes before second and third char alphabetically
	else if ((firstChar < secondChar) && (firstChar < thirdChar)) {
		printf("Sad\n");
	}
	// If thirdchar comes before first and second char alphabetically
	else if ((thirdChar < firstChar) && (thirdChar < secondChar)) {
		printf("Dead\n");
	}
	PAUSE;
} // end of main
