#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int N;
	do
	{
		cout << Message;
		cin >> N;
	} while (N < 0);

	return N;
}
int ReverseNumber(int N)
{
	int Reminder = 0;
	int N2 = 0;
	int Reminder2 = 0;
	while (N > 0)
	{
		Reminder = N % 10;
		N = N / 10;
		N2 = (N2 * 10) + Reminder;

	};
	return N2;
}

void PrintPalindromeNumber(int N)
{
	if (N == ReverseNumber(N))
	{
		cout << "Yes, it is a Palindorme number.\n";
	}
	else
		cout << "No, it is NOT a Palindorme number.\n";
}

int main()
{
	PrintPalindromeNumber(ReadPositiveNumber("Enter a positive Number: "));

	return 0;
}