#include "Matrix.h"
#include <cassert>
#include <iostream>

int sumOfAllNumber(double matrix[ROW_SIZE][COLUMN_SIZE])
{
	assert(ROW_SIZE > 0 && COLUMN_SIZE > 0);
	int sum =  0;
	for (int i = 0; i < ROW_SIZE; i++)
	{
		for (int j = 0; j < COLUMN_SIZE; j++)
		{
			sum += matrix[i][j];
		}
	}
	return sum;
}

void enterRow(double matrix[ROW_SIZE][COLUMN_SIZE], const int rowNumber)
{
	assert(rowNumber < ROW_SIZE && ROW_SIZE > 0);
	assert(COLUMN_SIZE> 0);
	double input[COLUMN_SIZE]= {0,0,0};
	for (int i = 0; i < COLUMN_SIZE; i++)
	{
		std::cin >> input[i];
		if (abs(input[i]) > 2.5)
		{
			std::cout << "Input must be in range (-2.5,2.5)\n";
			i--;
		}
	}
	
	for (int i = 0; i < COLUMN_SIZE; i++)
	{
		matrix[rowNumber][i] = input[i];
	}
	
	
}

void printMatrix(const double matrix[ROW_SIZE][COLUMN_SIZE])
{
	assert(COLUMN_SIZE > 0 && ROW_SIZE > 0);
	for (int i = 0; i < ROW_SIZE; i++)
	{
		for (int j = 0; j < COLUMN_SIZE; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int countOnes(const double matrix[ROW_SIZE][COLUMN_SIZE])
{
	int counter = 0;
	for (int i = 0; i < ROW_SIZE; i++)
	{
		for (int j = 0; j < COLUMN_SIZE; j++)
		{
			if (matrix[i][j] == 1)
			{
				counter++;
			}
		}
	}
	return counter;
}