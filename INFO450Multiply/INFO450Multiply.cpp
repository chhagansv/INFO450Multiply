// INFO450Multiply.cpp : Used to determine the multiples of the integers ranging from 1-10.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;


int main(void)
{
	cout << "Multiplication Table:\n\n" << endl
		<< "1\t2\t3\t4\t5\t6\t7\t8\t9\t10" << endl
		<< "" << endl;
	for (int c = 1; c < 11; c++)
	{
		cout << c << "| ";
		for (int i = 1; i < 11; i++)
		{
			cout << i * c << '\t';
		}
		cout << endl;
	}
	return 0;
}
