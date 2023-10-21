/*
 * main.c
 *
 *  Created on: Oct 6, 2023
 *      Author: Youssef Abdelrahman
 */
#include "stdio.h"
void main()
{
	float arr1[2][2], arr2[2][2];
	printf("Enter The Elements of 1st Matrix\r");
	short i ,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d:",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&arr1[i][j]);
		}
	}
	printf("Enter The Elements of 2nd Matrix\r");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		  {
			printf("Enter b%d%d:",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&arr2[i][j]);
		  }
	}
	printf("Sum of Matrix:\n");
	printf("%.1f   %.1f\n%.1f   %.1f",arr1[0][0]+arr2[0][0],arr1[0][1]+arr2[0][1]
		   ,arr1[1][0]+arr2[1][0],arr1[1][1]+arr2[1][1]);
}

