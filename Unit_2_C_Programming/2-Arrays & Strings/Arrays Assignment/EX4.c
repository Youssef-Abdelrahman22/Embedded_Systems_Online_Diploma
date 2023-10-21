/*
 * Insert.c
 *
 *  Created on: Oct 14, 2023
 *      Author: Youssef
 */
#include"stdio.h"
int main()
{
	printf("Enter no of elements: ");
	int num_of_elements;
	fflush(stdin);fflush(stdout);
	scanf("%d",&num_of_elements);
	int i;int arr[100];
	for(i=0;i<num_of_elements;i++)
	{
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be inserted : ");
	int num_to_insert;
	fflush(stdin);fflush(stdout);
	scanf("%d",&num_to_insert);
	printf("Enter the location : ");
	int num_location;
	fflush(stdin);fflush(stdout);
	scanf("%d",&num_location);
	int arr2[100];
	for(i=0;i<num_of_elements+1;i++)
	{
		arr2[i]=arr[i];
		if(i==num_location-1)
		{
			arr2[i]=num_to_insert;
		}
		else if(i>num_location-1)
		{
			arr2[i]=arr[i-1];
		}
	}
	for(i=0;i<num_of_elements+1;i++)
	{
		printf("%d",arr2[i]);
	}
	return 0;
}
