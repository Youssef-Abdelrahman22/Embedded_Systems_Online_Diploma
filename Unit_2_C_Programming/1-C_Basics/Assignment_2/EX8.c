/*
 * EX8.c
 *
 *  Created on: Aug 11, 2023
 *      Author: Youssef
 */
#include "stdio.h"
void main()
{
	printf("Enter operator either + or - or * or divide: ");
	fflush(stdin);fflush(stdout);
	char operator;
	scanf("%c",&operator);
	printf("Enter two operands: ");
	float Num1,Num2;
	scanf("%f %f",&Num1,&Num2);
	switch(operator)
	{
	case '+':
		 	 printf("%.3f + %.3f = %.3f",Num1,Num2,Num1+Num2);
		 	 break;
	case '-':
			 	 printf("%.3f - %.3f = %.3f",Num1,Num2,Num1-Num2);
			 	 break;
	case '*':
			 	 printf("%.3f * %.3f = %.3f",Num1,Num2,Num1*Num2);
			 	 break;
	case '/':
			 	 printf("%.3f + %.3f = %.3f",Num1,Num2,Num1/Num2);
			 	 break;
	}
}
