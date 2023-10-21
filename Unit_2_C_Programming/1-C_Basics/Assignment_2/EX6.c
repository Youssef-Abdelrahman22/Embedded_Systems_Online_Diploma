/*
 * EX6.c
 *
 *  Created on: Aug 11, 2023
 *      Author: Youssef
 */
#include "stdio.h"
void main()
{
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	int Number,Sum=0;
	scanf("%d",&Number);
	for(int i=1;i<=Number;i++)
	{
		Sum+=i;
	}
	printf("Sum = %d",Sum);
}

