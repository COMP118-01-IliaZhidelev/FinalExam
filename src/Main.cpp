#include<iostream>
#include<cassert>
#include "Matrix.h"



int main()
{
	
	auto isRunning = true;
	double matrix[4][3] = {0,0,0,   0,0,0, 0,0,0, 0,0,0 };
	while (isRunning)
	{
		std::cout << "1) Enter data in matrix (range -2.5 to 2.5)\n";
		std::cout << "2) Sum of all numbers\n";
		std::cout << "3) Count ones\n";
		std::cout << "4) Show data in matrix\n";
		std::cout << "5) Exit\n"; 
		int choice = 0;
		std::cout << "Please enter choice\n";
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
			const auto sum = sumOfAllNumber(matrix);
			std::cout << sum << "\n";
		}
			break;
		case 3:
		{
			auto counter = countOnes(matrix);
			std::cout << counter << std::endl;
		}
		break;

		case 4:
			printMatrix(matrix);
			break;

		case 5:
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