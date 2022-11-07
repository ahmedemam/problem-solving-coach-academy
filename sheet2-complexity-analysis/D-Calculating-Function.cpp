#include <string>
#include <iostream>

using namespace std;

int main()
{
	long long number;
	cin >> number;
	long long result;
	if (number % 2 == 0)
	{
		result = number / 2;
	}
	else
	{
		result = ((number / 2) + 1) * (-1);
	}

	cout << result << endl;
}
