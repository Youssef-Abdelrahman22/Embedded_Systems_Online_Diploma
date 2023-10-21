/*
 * EX5.c
 *
 *  Created on: Aug 11, 2023
 *      Author: Youssef
 */
#include "stdio.h"
void main()
{
	printf("Enter a character:");
	fflush(stdin);fflush(stdout);
	unsigned char character;
	scanf("%c",&character);
	if((character>=65&&character<=90)||(character>=97&&character<=122))
	{
		printf("%c is an alphabet",character);
	}
	else
	{
		printf("%c is not an alphabet",character);
	}
}

