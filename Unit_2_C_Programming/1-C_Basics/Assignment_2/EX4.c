/*
 * EX4.c
 *
 *  Created on: Aug 11, 2023
 *      Author: Youssef
 */
#include "stdio.h"
void main()
{
	printf("Enter A Number:");
	fflush(stdin);fflush(stdout);
	float Number;
	scanf("%f",&Number);
	if(Number == 0)
	{
		printf("You entered Zero.");
	}
	else if(Number >0)
	{
		printf("%.3f is positive.",Number);
	}
	else
	{
		printf("%.3f is Negative.",Number);
	}
}

