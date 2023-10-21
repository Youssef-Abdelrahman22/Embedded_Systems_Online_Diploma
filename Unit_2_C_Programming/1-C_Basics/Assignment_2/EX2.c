/*
 * EX2.c
 *
 *  Created on: Aug 11, 2023
 *      Author: Youssef
 */
#include "stdio.h"
void main()
{
	printf("Enter an alphabet:");
	fflush(stdin);fflush(stdout);
	unsigned char character;
	scanf("%c",&character);
	switch (character)
	{
	case 'a':
		        printf("%c is a vowel",character);
		        break;
	case 'e':
			    printf("%c is a vowel",character);
			    break;
	case 'i':
			    printf("%c is a vowel",character);
			    break;
	case 'o':
			    printf("%c is a vowel",character);
			    break;
	case 'u':
			    printf("%c is a vowel",character);
			    break;
	case 'A':
				printf("%c is a vowel",character);
				break;
	case 'E':
				printf("%c is a vowel",character);
				break;
	case 'I':
				printf("%c is a vowel",character);
				break;
	case 'O':
				printf("%c is a vowel",character);
				break;
	case 'U':
				printf("%c is a vowel",character);
				break;
	default:
		        printf("%c is a constant",character);
		        break;
	}
}

