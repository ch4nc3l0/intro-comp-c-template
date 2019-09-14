//**************************************************************
//...Written by..: Chance Gurley
//...Date Written: Aug 29, 2019
//...Purpose.....: Programming class
//**************************************************************
#define _CRT_SECURE_NO_WARNINGS // Allows use of scanf instead of scanf_s
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PAUSE system("pause")
#define CLS system("cls")

main() {
	// Define variables
	int miles = 0;
	int shipWeight = 0;
	int weightOver = 0;
	double weightOverageCost = 0;
	double weightCost = 0;
	double milesCost = 0;
	double totalCost = 0;
	// Print app purpose
	printf("This application will show the cost to ship a fictional item\n");
	printf("-------------------------------------------\n");
	// Get user input
	printf("Please enter the total shipping weight in pounds\n");
	scanf("%i", &shipWeight);
	printf("Please enter the miles to ship the package\n");
	scanf("%i", &miles);
	// Decision Statement
	// ----------
	// If shipping weight is 13 pounds or more add 1.55 each additional llb
	if (shipWeight >= 13) {
		weightOver = shipWeight - 13;
		weightOverageCost = weightOver * 1.55;
	}
	// Calculations
	// Miles
	// Cast int miles to double then round up result to get multiple of 321
	milesCost = ceil((double) miles / 321) * 3.21;
	// Weight
	weightCost = 13.13 + weightOverageCost;
	// Total cost
	totalCost = milesCost + weightCost;
	// Print results
	printf("Package Weight\t\t%i pound(s)\n", shipWeight);
	printf("Miles to ship package\t%i mile(s)\n", miles);
	printf("Shipping weight cost\t$%g\n", weightCost);
	printf("Shipping distance cost\t$%g\n", milesCost);
	printf("Total cost\t\t$%g\n", totalCost);

	
	PAUSE;
} // end of main
