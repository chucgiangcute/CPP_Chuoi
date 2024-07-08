// CPP_Chuoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i;
	char a = 'a';
    string chuoi = "Fibonacci";
	int dem = 0;
	for (i = 0;i < chuoi.size();i++)
	{
		if (chuoi[i] == a)
			dem++;
	}
	cout << "Co " << dem << "chu a";
}

