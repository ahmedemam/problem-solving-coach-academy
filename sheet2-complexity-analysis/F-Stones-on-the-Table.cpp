#include <string>
#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	string lights;
	cin >> lights;
	int counter = 0;
	char tempChar = lights[0];
	for (int i = 1; i < number; i++)
	{
		if (tempChar == lights[i])
		{
			counter++;
		}
		else
		{
			tempChar = lights[i];
		}
	}

	cout << counter << endl;
}
