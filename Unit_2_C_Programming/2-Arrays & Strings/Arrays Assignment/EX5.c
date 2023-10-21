/*
 * search.c
 *
 *  Created on: Oct 16, 2023
 *      Author: Youssef
 */
#include "stdio.h"
int main()
{
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	int num_of_elements;
	scanf("%d",&num_of_elements);
	int arr[100],i;
	for(i=0;i<num_of_elements;i++)
	{
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements to be searched : ");
	int num_to_search;
	fflush(stdin);fflush(stdout);
	scanf("%d",&num_to_search);
	int Location= -1 ;
	for(i=0;i<num_of_elements;i++)
	{
		if(num_to_search==arr[i])
		{
			Location = i+1;
			break;
		}
	}
	if(Location!=-1)
	{
		printf("Number found at the location = %d",Location);
	}
	else
	{
		printf("Not found");
	}
	return 0;
}
