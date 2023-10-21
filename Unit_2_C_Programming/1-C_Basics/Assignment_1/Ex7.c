/*
 * Ex7.c
 *
 *  Created on: Aug 1, 2023
 *      Author: Youssef
 */
#include"stdio.h"
void main()
{
	int A , B;
	printf("Enter The First Number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&A);
	printf("Enter The Second Number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&B);
	if(A>B)
	{
		int C=A-B;
		B=A;
		A=B-C;
	}
	else
	{
		int C = B-A;
		A=B;
		B=A-C;
	}
	printf("After Swapping\n The first Number is %d\n The Second Number is %d",A,B);
}

