/*
 * EX6.c
 *
 *  Created on: Aug 10, 2023
 *      Author: Youssef
 */
#include "stdio.h"
void main()
{
	float A,B,Temp;
	printf("#########Console_output######\n");
	printf("Enter value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&A);
	printf("Enter value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&B);
	Temp=A;
	A=B;
	B=Temp;
	printf("After swapping, value of a = %.*f\nAfter swapping, value of b = %.*f\n",2,A,2,B);
	printf("###############################################################");
}

