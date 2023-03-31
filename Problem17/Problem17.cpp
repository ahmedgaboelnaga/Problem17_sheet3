#include <iostream>

using namespace std;

int main()
{
	//Write a program that gives the sum of squares of numbers from 10 to 20.
	int sum = 0, square;
	for (int i = 10; i <= 20; i++)
	{
		square = i * i;
		sum += square;
	}
	cout << "The sum of the square roots from 10 to 20 is: " << sum << endl;

	return 0;
}