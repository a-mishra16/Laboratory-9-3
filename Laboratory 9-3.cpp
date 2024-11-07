/*
* Project: Laboratory 9-3
* Author: Aanika Mishra
* Date: 11-7-2024
* Description:This program gets 20 random dice rolls and returns them with any "runs" (adjacent duplicates) in parenthesis.
*/

#include <iostream>
#include <iomanip>

using namespace std;

void displayRun(int values[], int size);
bool hasRun(int values[], int size);

int main()
{
	srand(time(0));
	const int length = 20;
	int rolls[length];
	int roll;

	for (int i = 0; i < 20; i++)
	{
		roll = rand() % 6 + 1;
		rolls[i] = roll;
	}

	displayRun(rolls, length);

}

void displayRun(int values[], int size)
{
	for (int i = 0; i < size; i++)
	{	
		if (values[i] == values[i + 1] && values[i] != values[i-1])
		{
			cout << "(";
		}

		cout << values[i];
		
		if (values[i] == values[i - 1] && values[i] != values[i + 1])
		{
			cout << ")";
		}

		cout << " ";

	}
}

