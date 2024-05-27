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
	auto input = 0;
	auto isInputComplete = false;
	int completedInputs = 0;
	while (!isInputComplete)
	{
		std::cin >> input;
		if (std::cin.fail())
		{
			std::cout << "Invalid input try again\n";
			continue;
		}
		if (abs(input )> )
	}
	
}

int main()
{
	
	auto isRunning = true;
	double matrix[4][3];
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
			break;
		case 2: 
			break;
		case 3:
			break;
		case 4:
		{
			isRunning = false;
			break;
		}
		default:
		{
			std::cout << "Wrong input\n";
		}
			break;
		}
	}
}