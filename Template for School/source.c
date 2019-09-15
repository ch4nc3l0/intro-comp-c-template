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
	int ticket = 0;
	int lotteryPool[365];
	int money = 0;
	char didWin = "f";
	int timesWon = 0;

	// State app purpose
	printf("This app will generate a random lottery your goal is to win within one year of tickets\n");
	// Print input statement
	printf("Input your lottery ticket number in 000 format\n");
	scanf(" %i", &ticket);
	// Generate random lottery
	srand(time(0)); // Generate random numbers every time program is run
	for (int i = 0; i < 365; i++) {
		// Subtract money
		money = money--;
		// Generate random numbers and assign them to array
		lotteryPool[i] = rand() % 1000;
		// Check if user 'won'
		if (ticket == lotteryPool[i]) {
			money += 500;
			didWin = 't';
			timesWon = timesWon++;
		}
	}
	// Print Winner or Loser
	if (didWin == 't') {
		printf("Winner! You won %i times\n", timesWon);
	}
	else {
		printf("Loser! You won %i times please try again!\n", timesWon);
	}
	// Print money
	printf("Money = $%i.00\n", money);
	

	PAUSE;
} // end of main
