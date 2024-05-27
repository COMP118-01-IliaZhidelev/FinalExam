#pragma once
/** \file Matrix.h
* \brief it contains matrix prototypes
* \author Ilia Zhidelev
* \date 27.05.2024
*/
const int ROW_SIZE = 4;
const int COLUMN_SIZE = 3;

int sumOfAllNumber(double matrix[ROW_SIZE][COLUMN_SIZE]);
void enterRow(double matrix[ROW_SIZE][COLUMN_SIZE], const int rowNumber);
void printMatrix(const double matrix[ROW_SIZE][COLUMN_SIZE]); 
int countOnes(const double matrix[ROW_SIZE][COLUMN_SIZE]);
