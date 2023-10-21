/*
 * Transpose.c
 *
 *  Created on: Oct 14, 2023
 *      Author: Youssef
 */
#include "stdio.h"
int main()
{
	printf("Enter rows and columns of matrix: ");
	fflush(stdin);fflush(stdout);
	int i,j;
	int rows,cols;
	scanf("%d %d",&rows,&cols);
	printf("Enter elements of Matrix:\n");
	int arr[100][100];
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("Enter elements a%d%d : ",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr[i][j]);
			printf("\n");
		}
	}
	printf("\r\nEntered Matrix:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of Matrix:\n");
	int arrTransposed[100][100];
	int rows_Transposed,cols_Transposed;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			arrTransposed[j][i]=arr[i][j];
		}
	}
	rows_Transposed=cols;
	cols_Transposed=rows;
	for(i=0;i<rows_Transposed;i++)
	{
		for(j=0;j<cols_Transposed;j++)
		{
			printf("%d\t",arrTransposed[i][j]);
		}
		printf("\n");
	}
	return 0;
}
