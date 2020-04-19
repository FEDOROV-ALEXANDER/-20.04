// Задание на 20.04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//задача С
int main()
{
	int N, j, a=0, s = 1;
	setlocale(LC_ALL, "Russian");
	cout << "введите колтчество элементов массива";
	cin >> N;
	j = N - 2;
	int* A = new int[N];
	for (int i = 0; i < N; i++)
	{
		setlocale(LC_ALL, "Russian");
		cout << " введите элементы массива" << i << " " << "\t";
		cin >> A[i];
		if (A[i] > a)
		{
			a = A[i];
			s = 1;
		}
		else if (A[i] == a)
			s++;

	}


	cout << "max" << A[j] << endl;
	cout << "num" << s;
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
