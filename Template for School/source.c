//**************************************************************
//...Written by..: Chance Gurley
//...Date Written: Aug 29, 2019
//...Purpose.....: Programming class
//**************************************************************
#define _CRT_SECURE_NO_WARNINGS // Allows use of scanf instead of scanf_s
#include <stdio.h>
#include <stdlib.h>
#define PAUSE system("pause")
#define CLS system("cls")

main() {
	// Assign variables
	float li = 0;
	float os = 0;
	float hg = 0;
	float kr = 0;
	float mix = 0;
	// Print app purpose
	printf("This app will take your input and output the correct mixture according to the formula\n");
	// Get user input for li, os, hg, kr
	printf("Input Lithium\n");
	scanf("%f", &li);
	printf("Input Osmium\n");
	scanf("%f", &os);
	printf("Input Mercury\n");
	scanf("%f", &hg);
	printf("Input Krypton\n");
	scanf("%f", &kr);
	// Set starting variables
	float startingLi = li;
	float startingOs = os;
	float startingHg = hg;
	float startingKr = kr;
	// Add li and os to mix
	mix = li + os;
	// Add more os equal to current ounces * li ounces
	float osAdd = mix * li;
	mix += osAdd;
	// hg * os
	hg = hg * os;
	mix += hg;
	// kr * 1.5
	kr = kr * 1.5;
	mix += kr;
	// li + 2
	int liAdd = li * 2;
	mix += liAdd;
	// Figure out gallons and ounces
	int gallons = mix / 128;
	float leftOverOZ = -128 * gallons + mix;
	// Output totals in chart
	printf("\tStart\tEnd\n"); // Start of chart
	printf("Lithium\t%0.0f\t%0.0f\n", startingLi, liAdd + li); // Lithium
	printf("Osmium\t%0.0f\t%0.0f\n", startingOs, os + osAdd); // Osmium
	printf("Mercury\t%0.0f\t%0.0f\n", startingHg, hg); // Mercury
	printf("Krypton\t%0.0f\t%0.0f\n", startingKr, kr); // Krypton
	printf("\nTotalOZ\t\t%0.1f\n",mix); // Ounces
	printf("Gallons\t\t%d\n", gallons); // Gallons
	printf("Remaining OZ\t%0.1f\n", leftOverOZ); // leftover ounces
	PAUSE;
} // end of main
