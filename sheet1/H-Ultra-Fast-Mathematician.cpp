#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string number1, number2;
	cin >> number1;
	cin >> number2;
	string result = "";
	int numberSize = number1.length();
	for(int i = 0; i< numberSize; i++){
		if(number1[i] == number2[i]){
			result+='0';	
		}else{
			result+='1';
		}
	}

	cout << result <<endl;
}
