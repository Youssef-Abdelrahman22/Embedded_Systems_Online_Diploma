/*
 * EX7.c
 *
 *  Created on: Aug 11, 2023
 *      Author: Youssef
 */
#include "stdio.h"
void main()
{
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	int Number,Factorial=1;
	scanf("%d",&Number);
	if(Number ==0 )
	{
		printf("Factorial = 1");
	}
	else if(Number<0)
	{
		printf("Error!!!  Factorial of Negative number doesn't exist");
	}
	else
	{
	  for(int i=1;i<=Number;i++)
	  {
		Factorial *= i;
	  }
	  printf("Factorial = %d",Factorial);
	}
}
