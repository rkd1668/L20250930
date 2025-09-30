#include <iostream>

using namespace std;

int N;

int main()
{
	cin >> N;

	unsigned long long Answer = 0;
	for (int i = 0; i < N; i++)
	{
		unsigned long long X = 0;
		unsigned long long Y = 1;
		cin >> X;
		int Temp = X;
		while (Temp != 0)
		{
			Temp = Temp >> 1;
			Y = Y << 1;
		}
		X = X << 1;
		if (X == Y)
		{
			Y = Y >> 1;
		}
		Answer = Answer ^ Y;
	}
	cout << Answer;

	return 0;
}