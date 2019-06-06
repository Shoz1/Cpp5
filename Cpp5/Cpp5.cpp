#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream in("C:\\f.txt");
	ofstream out1("C:\\g.txt");
	
	int number;
	while (in >> number)
	{
		if (sqrt(number)*sqrt(number)== number) out1 << number << " ";
		else out1 << " ";
	}
	return 0;
}

