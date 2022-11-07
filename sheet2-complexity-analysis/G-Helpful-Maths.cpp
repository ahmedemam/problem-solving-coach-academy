#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string equation;
	cin >> equation;
	if(equation.length() <= 2){
		cout << equation << endl;
	}else{
		string number;
		for(int i = 0; i< equation.length(); i++){
			if(equation[i] != '+'){
				number += equation[i];
			}
		}
		sort(number.begin(), number.end());
		for(int i = 0; i< number.length(); i++){
			if(i == number.length()-1){
				cout << number[i] << endl;
			}else{
				cout << number[i] << "+";
			}
		}
		cout << endl;
	}
}
