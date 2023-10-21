/*
 * EX3.c
 *
 *  Created on: Aug 11, 2023
 *      Author: Youssef
 */
#include "stdio.h"
void main()
{
	printf("Enter Three Numbers:");
	fflush(stdin);fflush(stdout);
	float X,Y,Z;
	scanf("%f %f %f",&X,&Y,&Z);
	if(X>Y)
	{
		if(X>Z)
		{
			printf("Largest Number= %.2f",X);
		}
		else
		{
			printf("Largest Number= %.2f",Z);
		}
	}
	else
	{
		if(Y>Z)
		{
			printf("Largest Number= %.2f",Y);
		}
		else
		{
			printf("Largest Number= %.2f",Z);
		}
	}
}

