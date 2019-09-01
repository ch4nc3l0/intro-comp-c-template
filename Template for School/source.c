//**************************************************************
//...Written by..: Chance Gurley
//...Date Written: Aug 30, 2019
//...Purpose.....: Print Name 14 times
//**************************************************************
#define _CRT_SERCURE_NO_WARNINGS // Allows use of scanf instead of scanf_s
#include <stdio.h>
#include <stdlib.h>
#define PAUSE system("pause")
#define CLS system("cls")

main() {
	for (int i = 0; i < 14; i++) {
		printf("My name is Chance Gurley \n");
	}
	PAUSE;
} // end of main
