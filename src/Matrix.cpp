/** \file Matrix.cpp
* \brief it contains implememtations of matrix functions
* \author Ilia Zhidelev
* \date 27.05.2024
*/
#include "Matrix.h"
#include <cassert>
#include <iostream>
/**
* calculates sum of all matrix elements
* @param matrix: matrix to work on
*/
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

/**
* fills particular row of matrix
* @param matrix: matrix to work on
* @param rowNumber: the number of row that must be filled
*/
void enterRow(double matrix[ROW_SIZE][COLUMN_SIZE], const int rowNumber)
{
	assert(rowNumber < ROW_SIZE && ROW_SIZE > 0);
	assert(COLUMN_SIZE> 0);
	double input[COLUMN_SIZE]= {0,0,0};
	for (int i = 0; i < COLUMN_SIZE; i++)
	{
		std::cin >> input[i];
		if (std::cin.fail())
		{
			std::cout << "Invalid input\n";
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			i = 0;
		}
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
	std::cin.clear();
	std::cin.ignore(1000, '\n');
}

/**
* prints matrix
* @param matrix: matrix to work on
*/
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

/**
* counts all 1 in the matrix
* @param matrix: matrix to work on
* @return the amount of 1
*/
int countOnes(const double matrix[ROW_SIZE][COLUMN_SIZE])
{
	int counter = 0;
	for (int i = 0; i < ROW_SIZE; i++)
	{
		for (int j = 0; j < COLUMN_SIZE; j++)
		{
			// introduce a bug
			//if (matrix[i][j] == 1.1)
			if (matrix[i][j] == 1)
			{
				counter++;
			}
		}
	}
	return counter;
}