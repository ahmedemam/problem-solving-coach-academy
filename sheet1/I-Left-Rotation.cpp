#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arraySize, rotation;
	cin >> arraySize >> rotation;
	int numbers[arraySize];
	int rotatedNumbers[arraySize];
	for(int i = 0; i < arraySize; i++)
	{
		cin >> numbers[i];
		int newIndex = i + arraySize - rotation >= arraySize ? i + arraySize - rotation - arraySize : i + arraySize - rotation;
		rotatedNumbers[newIndex] = numbers[i];
	}

	for(int i = 0; i < arraySize; i++)
	{
		cout << rotatedNumbers[i] << " ";
	}

	cout << endl;
}
