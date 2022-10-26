#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string helloWord = "hello";
	string word;
	cin >> word;
	int helloPassedLettersIndex= 0;

	for (int i = 0; i < word.length(); i++)
	{
		if(word[i] == helloWord[helloPassedLettersIndex])
		{
			helloPassedLettersIndex++;
		}
		if(helloPassedLettersIndex == helloWord.length())
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}
