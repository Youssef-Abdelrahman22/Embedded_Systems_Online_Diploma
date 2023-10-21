/*
 * length.c
 *
 *  Created on: Oct 16, 2023
 *      Author: Youssef
 */
#include "stdio.h"
int main()
{
	printf("Enter a string: ");
	char S[100];
	fflush(stdin);fflush(stdout);
	scanf("%s",S);
	int LengthOfString=0,i=0;
	while(S[i]!=0)
	{
		LengthOfString++;
		i++;
	}
	printf("Length of string: %d",LengthOfString);
}
