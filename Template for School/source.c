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
	// Set Variables
	int ticket = 0;
	int lotteryPool[];

	// State app purpose
	printf("This app will generate a random lottery your goal is to win within one year of tickets\n");
	// Print input statement
	printf("Input your lottery ticket numbers in 000 format\n");
	scanf("i", ticket);
	// Generate random lottery
	for (int i = 0, i <= 365, i++) {
		lotteryPool[i] = rand() % 1000
			printf(" %i\n", lotteryPool[i]);
	}
	
	PAUSE;
} // end of main
