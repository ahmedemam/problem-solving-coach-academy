#include <string>
#include <iostream>
#include <algorithm> 

using namespace std;

int main()
{
	int numbers;
	cin >> numbers;
	int numbersArray[numbers][2];
	for (int i = 0; i < numbers; i++)
	{
		cin >> numbersArray[i][0] >> numbersArray[i][1];
		string number1Str = (to_string(numbersArray[i][0]));
		string number2Str = (to_string(numbersArray[i][1]));
		reverse(number1Str.begin(), number1Str.end());
		reverse(number2Str.begin(), number2Str.end());
		string sumStr = to_string(stoi(number1Str) + stoi(number2Str));
		reverse(sumStr.begin(), sumStr.end());
		int sumReversed = stoi(sumStr);
		cout << sumReversed << endl;
	}

}
