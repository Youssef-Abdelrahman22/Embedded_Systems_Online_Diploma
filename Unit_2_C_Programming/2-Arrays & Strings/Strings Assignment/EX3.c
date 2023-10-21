/*
 * Reverse.c
 *
 *  Created on: Oct 16, 2023
 *      Author: Youssef
 */
#include "stdio.h"
int main()
{
	printf("Enter the string  : ");
	char S[100];
	fflush(stdin);fflush(stdout);
	scanf("%s",S);
	int i=strlen(S);
	printf("Reverse String is : ");
	for(i;i>=1;i--)
	{
		printf("%c",S[i-1]);
	}
	return 0;
}
