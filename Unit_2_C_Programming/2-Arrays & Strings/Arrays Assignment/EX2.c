/*
 * average.c
 *
 *  Created on: Oct 14, 2023
 *      Author: Youssef Abdelrahman
 */
#include "stdio.h"
int main()
{
	float arr1[100];
	printf("Enter the Numbers of Data: ");
	int n=0;
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d.Enter number:",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr1[i]);
	}
	float average,Sum=0;
	for(i=0;i<n;i++)
	{
	  Sum +=arr1[i];
	}
	average= Sum/n;
	printf("Average = %.2f",average);
	return 0;
}
