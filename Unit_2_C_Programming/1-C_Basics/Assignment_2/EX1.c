/*
 * EX1.c
 *
 *  Created on: Aug 11, 2023
 *      Author: Youssef
 */
#include "stdio.h"
void main()
{
	int Number;
	printf("Enter an Integer You want to check:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Number);
	int x = Number %2;
	switch(x)
	{
	case 0:
		printf("%d is even",Number);
		break;
	case 1:
		printf("%d is odd",Number);
	     break;
	}
}

