#include <string>
#include <iostream>

using namespace std;

int main()
{
	int arraySize;
	int arraySum = 0;
	cin >> arraySize;
	int numbers[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		cin >> numbers[i];
		arraySum += numbers[i];
	}

	cout << arraySum << endl;
}
