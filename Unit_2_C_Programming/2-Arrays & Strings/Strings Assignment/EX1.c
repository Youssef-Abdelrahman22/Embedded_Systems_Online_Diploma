/*
 * frequency.c
 *
 *  Created on: Oct 16, 2023
 *      Author: Youssef
 */
#include "stdio.h"
int main()
{
	char s[100];
	char character;
	int i=0;

	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(s);
	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&character);
	int frequency=0;
	while(s[i]!=0)
	{
		if(character==s[i])
		{
			frequency++;
		}
		i++;
	}
	printf("Frequency of %c = %d",character,frequency);
	return 0;
}



