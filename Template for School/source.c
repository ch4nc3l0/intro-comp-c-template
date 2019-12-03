//**************************************************************
//...Written by..: Chance Gurley
//...Date Written: DEC 1, 2019
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
int stateSelectorMenu(char person[]);
void votingTool(int cadidateVotes[50][2], char states[50][20], int person);
void initCandidateArray(int candidateVotes[50][2]);
int mainMenuChoiceValidator();
void showVotes(int trumpVotes[50][2], int bidenVotes[50][2], char states[50][20]);
void showTies(int trumpVotes[50][2], int bidenVotes[50][2], char states[50][20]);
int stateSelectorValidator();
void statePrinter();
void highAndLow(int trumpVotes[50][2], int bidenVotes[50][2], char states[50][20]);

/***********************************
		Global Variables
***********************************/
// NONE

/***********************************
				Main
***********************************/
main() {
	// Declare variables
	int trumpVotes[50][2];
	int bidenVotes[50][2];
	char states[50][20] = { "Alabama","Alaska","Arizona","Arkansas","California","Colorado","Connecticut", "Delaware","Florida","Georgia","Hawaii","Idaho","Illinois", "Indiana","Iowa", "Kansas", "Kentucky", "Louisiana", "Maine", "Maryland", "Massachusetts", "Michigan", "Minnesota", "Mississippi", "Missouri", "Montana", "Nebraska", "Nevada", "New Hampshire", "New Jersey", "New Mexico", "New York", "North Carolina", "North Dakota", "Ohio", "Oklahoma", "Oregon", "Pennsylvania", "Rhode Island", "South Carolina", "South Dakota", "Tennessee", "Texas", "Utah", "Vermont", "Virginia", "Washington", "West Virginia", "Wisconsin", "Wyoming" };
	int mainMenuChoice = 99; // Set choice to something invalid

	// Init candidatevotes arrays
	initCandidateArray(trumpVotes);
	initCandidateArray(bidenVotes);



	// Switch using mainMenuChoice
	do {
		// Print Main Menu
		printMenu();
		// Get user choice
		mainMenuChoice = mainMenuChoiceValidator();

		switch (mainMenuChoice) {
		case 1:
			votingTool(trumpVotes, states, 0);
			CLS;
			break;
		case 2:
			votingTool(bidenVotes, states, 1);
			CLS;
			break;
		case 3:
			showVotes(trumpVotes, bidenVotes, states);
			CLS;
			break;
		case 4:
			showTies(trumpVotes, bidenVotes, states);
			CLS;
			break;
		case 5:
			highAndLow(trumpVotes, bidenVotes, states);
			CLS;
			break;
		}
	} while (mainMenuChoice != 6); // If 6 is entered the app will say goodbye and close, until that happens run the app in a loop


	printf("\n\n\t\tBye time to go do something more important with your life! :)\n");


	PAUSE;
} // end of main

/***********************************
		Function Definitions
***********************************/
// Print Menu
void printMenu() {
	printf("\n\n\t\t******************************************************************\n");
	printf("\t\t**************************  Main Menu  ***************************\n");
	printf("\t\t******************************************************************\n");
	printf("\t\t1.\tEnter votes from a state for Donald Trump\n");
	printf("\t\t2.\tEnter votes from a state for Joe Biden\n");
	printf("\t\t3.\tDisplay total votes for each candidate\n");
	printf("\t\t4.\tList the state name(s) where candidates tied\n");
	printf("\t\t5.\tFor each candidate display the highest and lowest votes\n");
	printf("\t\t6.\tElection is over, exit the program\n");
}

int stateSelectorMenu(char person[]) {
	int userStateChoice;


	printf("Select the state to add votes for %s\n", person);
	printf("\n\n");
	statePrinter();
	printf("\n\n Please enter your state choice...");
	userStateChoice = stateSelectorValidator();
	CLS;
	return userStateChoice;

}

int stateSelectorValidator() {
	int validator = 0;
	int userChoice;
	while (validator == 0) {
		scanf(" %i", &userChoice);
		if (userChoice >= 0 && userChoice <= 49) {
			validator = 1;
		}
		else {
			CLS;
			printf("\t\t\t\t+---------------------------------+\n");
			printf("\t\t\t\t|     Enter only a number 0-49    |\n");
			printf("\t\t\t\t+---------------------------------+\n");
			statePrinter();
		}
	}
	return userChoice;
}

void votingTool(int candidateVotes[50][2], char states[50][20], int person) {
	// Var init
	char candidate[20];
	int state; 
	int votes;

	// Set Candidate
	if (person == 0) {
		strncpy(candidate, "Trump", 20);
	}
	else if (person == 1) {
		strncpy(candidate, "Biden", 20);
	}
	else {
		printf("Error!!! Cannot determine who the canidate is!!!!!");
	}
	
	// Get State
	state = stateSelectorMenu(candidate);
	// Ask how many votes did candidate get in state
	printf("How many additional votes for %s in %s\n", candidate, states[state]);
	// Get user input for state votes
	scanf(" %i", &votes);
	// Add the votes to the array under the state index
	candidateVotes[state][1] += votes;
	// End function
	CLS;
}// Function to add votes from a state to a candidate needs parameters candidateVotes array, States array, candidate int

void initCandidateArray(int candidateVotes[50][2]) {
	for (int i = 0; i <= 49; i++) {
		candidateVotes[i][0] = i;
		candidateVotes[i][1] = 0;
	} // make arr 1-50state index make second part votes 
}

int mainMenuChoiceValidator() {
	int mainMenuChoice;
	scanf(" %i", &mainMenuChoice);
	while (mainMenuChoice != 1 && mainMenuChoice != 2 && mainMenuChoice != 3 && mainMenuChoice != 4 && mainMenuChoice != 5 && mainMenuChoice != 6) {
		CLS;
		printf("\n\n");
		printf("\t\t\t\t+---------------------------------+\n");
		printf("\t\t\t\t|   Please Enter A Valid Choice   |\n");
		printf("\t\t\t\t+---------------------------------+\n");
		printMenu();
		scanf(" %i", &mainMenuChoice);
	}
	CLS;
	return mainMenuChoice;
}// Gets, and validates main menu choice and returns choice

void showVotes(int trumpVotes[50][2], int bidenVotes[50][2], char states[50][20]) {
	// State Trump Biden array structure
	int allVotes[50][4];
	int trumpTotal = 0;
	int bidenTotal = 0;
		
	// Print Votes Menu
	printf("\n\n");
	printf("\t\t+-------------------------------------------------------------+\n");
	printf("\t\t|------------------       Total    Votes     -----------------|\n");
	printf("\t\t|-------------------------------------------------------------|\n");
	printf("\t\t+STATE(S)---------------------TRUMP-------------------BIDEN---+\n");

	// Get votes for Trump
	for (int i = 0; i <= 49; i++) {
		// Set State Index
		allVotes[i][0] = i;
		// Set Trump Votes
		allVotes[i][1] = trumpVotes[i][1];
		// Set Biden Votes
		allVotes[i][2] = bidenVotes[i][1]; // Note: could have been done without this array I learned about 2d arrays and are using them when not nessasary

		// Only Print votes if one of the states votes is filled out
		if (allVotes[i][1] != 0 || allVotes[i][2] != 0) {

			// Print Votes on States with votes
			printf("\t\t%s \t\t\t", states[i]);
			if (i == 1 || i == 10 || i == 11 || i == 14 || i == 15 || i == 18 || i == 27 || i == 34 || i == 36 || i == 42 || i == 43) {
				printf("\t");
			}// Shorter state names need an extra tab to look correct
			// Print Votes
			printf("%i\t\t\t%i\n", allVotes[i][1], allVotes[i][2]);
		}
	}
	// Show totals
	for (int i = 0; i <= 49; i++) {
		trumpTotal += allVotes[i][1];
		bidenTotal += allVotes[i][2];
	}
	printf("\n\n");
	printf("\t\tTotals\t\t\t\t%i\t\t\t%i\n", trumpTotal, bidenTotal);
	
	PAUSE;
}// Function showing votes

void showTies(int trumpVotes[50][2], int bidenVotes[50][2], char states[50][20]) {
	int didTheyTie = 0;
	
	for (int i = 0; i <= 49; i++) {
		if (trumpVotes[i][1] == bidenVotes[i][1] && trumpVotes[i][1] + bidenVotes[i][1] != 0 ) {
			printf("They tied in %s with %i votes\n", states[i], trumpVotes[i][1]);
			didTheyTie = 1;
		}
	}
	if (didTheyTie == 0) {
		printf("The candidates did not tie in any state yet\n");
	}// Print message if no ties exist
	PAUSE;
} // Function showing states with ties without the unnessasary extra array storing information I already had

void statePrinter() {
	// I made this before the 2d array, I am not deleting it after typing it out :}
	printf("0. Alabama\t\t\t25. Montana\n");
	printf("1. Alaska\t\t\t26. Nebraska\n");
	printf("2. Arizona\t\t\t27. Nevada\n");
	printf("3. Arkansas\t\t\t28. New Hampshire\n");
	printf("4. California\t\t\t29. New Jersey\n");
	printf("5. Colorado\t\t\t30. New Mexico\n");
	printf("6. Connecticut\t\t\t31. New York\n");
	printf("7. Delaware\t\t\t32. North Carolina\n");
	printf("8. Florida\t\t\t33. North Dakota\n");
	printf("9. Georgia\t\t\t34. Ohio\n");
	printf("10. Hawaii\t\t\t35. Oklahoma\n");
	printf("11. Idaho\t\t\t36. Oregon\n");
	printf("12. Illinois\t\t\t37. Pennsylvania\n");
	printf("13. Indiana\t\t\t38. Rhode Island\n");
	printf("14. Iowa\t\t\t39. South Carolina\n");
	printf("15. Kansas\t\t\t40. South Dakota\n");
	printf("16. Kentucky\t\t\t41. Tennessee\n");
	printf("17. Louisiana\t\t\t42. Texas\n");
	printf("18. Maine\t\t\t43. Utah\n");
	printf("19. Maryland\t\t\t44. Vermont\n");
	printf("20. Massachusetts\t\t45. Virgina\n");
	printf("21. Michigan\t\t\t46. Washington\n");
	printf("22. Minnesota\t\t\t47. West Virginia\n");
	printf("23. Mississippi\t\t\t48. Wisconsin\n");
	printf("24. Missouri\t\t\t49. Wyoming\n");
}
void highAndLow(int trumpVotes[50][2], int bidenVotes[50][2], char states[50][20]) {
	// Array keeps track of trump highest votes [0] =state [1] =num of votes
	int trumpHigh[2];
	int bidenHigh[2];
	int trumpLow[2];
	int bidenLow[2];
	int isThereOneVoteTrump = 0;
	int isThereOneVoteBiden = 0;

	for (int i = 0; i <= 49; i++) {
		if (trumpVotes[i][1] != 0) {
			isThereOneVoteTrump = 1;
		}// Check if trump data is something other than 0
		if (trumpVotes[i][1] > trumpVotes[i - 1][1] && isThereOneVoteTrump == 1) {
			trumpHigh[0] = i;
			trumpHigh[1] = trumpVotes[i][1];
		}// Assign largest Trump votes to trumpHigh
		if (trumpVotes[i][1] < trumpVotes[i - 1][1] && isThereOneVoteTrump == 1) {
			trumpLow[0] = i;
			trumpLow[1] = trumpVotes[i][1];
		}// Assign Lowest Trump votes to trumpLow
		if (bidenVotes[i][1] != 0) {
			isThereOneVoteBiden = 1;
		}// Check if biden data is something other than 0
		if (bidenVotes[i][1] > bidenVotes[i - 1][1] && isThereOneVoteBiden == 1) {
			bidenHigh[0] = i;
			bidenHigh[1] = bidenVotes[i][1];
		}// Assign largest Biden votes to bidenHigh
		if (bidenVotes[i][1] < bidenVotes[i - 1][1] && isThereOneVoteBiden == 1) {
			bidenLow[0] = i;
			bidenLow[1] = bidenVotes[i][1];
		}// Assign lowest Biden votes to bidenLow

	}
	if (isThereOneVoteTrump == 0) {
		printf("\n\n");
		printf("\t\t+--------------------------------------+\n");
		printf("\t\t|---There are no votes for Trump yet---|\n");
		printf("\t\t+--------------------------------------+\n");
	}
	else {
		printf("\n\n");
		printf("\t\t+-------------------------------------------------+\n");
		printf("\t\tTrumps Highest voting state is %s with %i votes\n", states[trumpHigh[0]], trumpHigh[1]);
		printf("\t\t|-------------------------------------------------|\n");
		printf("\t\tTrumps Lowest voting state is %s with %i votes \n", states[trumpLow[0]], trumpLow[1]);
		printf("\t\t+-------------------------------------------------+\n");
	}
	if (isThereOneVoteBiden == 0) {
		printf("\n\n");
		printf("\t\t+--------------------------------------+\n");
		printf("\t\t|---There are no votes for Biden yet---|\n");
		printf("\t\t+--------------------------------------+\n");
	}
	else {
		printf("\n\n");
		printf("\t\t+-------------------------------------------------+\n");
		printf("\t\tBidens Highest voting state is %s with %i votes\n", states[bidenHigh[0]], bidenHigh[1]);
		printf("\t\t|-------------------------------------------------|\n");
		printf("\t\tBidens Lowest voting state is %s with %i votes \n", states[bidenLow[0]], bidenLow[1]);
		printf("\t\t+-------------------------------------------------+\n");
	}
	PAUSE;
}