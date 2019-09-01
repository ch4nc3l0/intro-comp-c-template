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
	// init two variables for user input
	int usrValOne = 0;
	int usrValTwo = 0;
	// capture user input
	printf("This program will add, multiply, and divide two numbers \n");
	printf("Please input value 1 \n");
	scanf("%d", &usrValOne);
	printf("Please input value 2 \n");
	scanf("%d", &usrValTwo);
	// do logic and assign variables for later use
	int sum = usrValOne + usrValTwo;
	int product = usrValOne * usrValTwo;
	int division = usrValOne / usrValTwo;
	// print results to console
	printf("The sum of %d + %d = %d.\n", usrValOne, usrValTwo, sum);
	printf("The product of %d * %d = %d.\n", usrValOne, usrValTwo, product);
	printf("The result of dividing %d / %d as integers is %d.\n", usrValOne, usrValTwo, division);
	
	PAUSE;
} // end of main
