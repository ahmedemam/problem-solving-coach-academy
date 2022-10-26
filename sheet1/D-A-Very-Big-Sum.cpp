#include <string>
#include <iostream>

using namespace std;

int main()
{
	int arraySize;
	cin >> arraySize;
	long long arraySum = 0;
	long long array[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		cin >> array[i];
		arraySum += array[i];
	}
	cout << arraySum << endl;
}
