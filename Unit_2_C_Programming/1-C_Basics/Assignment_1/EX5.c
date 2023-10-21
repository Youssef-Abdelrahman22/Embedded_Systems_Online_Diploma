/*
 * EX5.c
 *
 *  Created on: Aug 10, 2023
 *      Author: Youssef
 */
#include "stdio.h"
void main()
{
	printf("#########Console_output######\n");
	printf("Enter a character:");
	fflush(stdin);fflush(stdout);
	char C;
	scanf("%c",&C);
	printf("\nASCII value of %c = %d",C,C);
	printf("\n#############################");
}

