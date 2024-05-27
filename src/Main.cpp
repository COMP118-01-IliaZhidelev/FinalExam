#include<iostream>
#include<cassert>

const int ROW_SIZE = 4;
const int COLUMN_SIZE = 3;

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

void enterRow(double matrix[ROW_SIZE][COLUMN_SIZE], int rowNumber)
{
	assert(rowNumber < ROW_SIZE && ROW_SIZE > 0);
	assert(COLUMN_SIZE> 0);
	double input[COLUMN_SIZE]= {0,0,0};
	int completedInputs = 0;
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

void printMatrix(double matrix[ROW_SIZE][COLUMN_SIZE])
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

int main()
{
	
	auto isRunning = true;
	double matrix[4][3] = {0,0,0,   0,0,0, 0,0,0, 0,0,0 };
	while (isRunning)
	{
		std::cout << "1) Enter data in matrix (range -2.5 to 2.5)\n";
		std::cout << "2) Sum of all numbers\n";
		std::cout << "3) Show data in matrix\n";
		std::cout << "4) Exit\n"; 
		int choice = 0;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
		{
			for (int i = 0; i < ROW_SIZE; i++)
			{
				std::cout << "Enter " << i << " row "<< std::endl;
				enterRow(matrix, i);
			}
			break;
		}
		case 2: 
		{
			auto sum = sumOfAllNumber(matrix);
			std::cout << sum << "\n";
		}
			break;
		case 3:
			printMatrix(matrix);
			break;
		case 4:
			isRunning = false;
			break;
		default:
		{
			std::cout << "Wrong input\n";
		}
			break;
		}
	}
}