// Задача А1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//задача A1

int main()
{
	int N, c = 1000000, a = 0;
	setlocale(LC_ALL, "Russian");
	cout << "число элементов   ";
	cin >> N;
	int* A = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		if (A[i] >= a)
			a = A[i];
		if (A[i] <= c)
			c = A[i];





	}  cout << "max  " << a << endl;
	cout << "min  " << c;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
