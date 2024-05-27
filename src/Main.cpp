/** \file Main.cpp
* \brief it contains the entry point of executable
* \author Ilia Zhidelev
* \date 27.05.2024
*/

#include<iostream>
#include<cassert>
#include "Matrix.h"

/**
* The entry point of the program, main
* @return Returns 0 if success, any other value otherwise
*/
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
		std::cout << "Please enter choice\n";
		int choice = 0;
		std::cin >> choice;
		if (std::cin.fail())
		{
			std::cout << "Invalid input\n";
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			continue;
		}
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
			std::cout << "Wrong input\n";
			break;
		}
	}
}