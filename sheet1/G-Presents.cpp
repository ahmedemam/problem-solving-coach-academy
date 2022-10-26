#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int friendsNumber;
	cin >> friendsNumber;
	int gifts[friendsNumber];
	int friendsGifts[friendsNumber];

	for(int i = 0; i < friendsNumber; i++)
	{
		cin >> gifts[i];
		int newIndex = gifts[i] - 1 > friendsNumber ? gifts[i] - 1 - friendsNumber : gifts[i] - 1;
		friendsGifts[newIndex] = i + 1;
	}

	for(int i = 0; i < friendsNumber; i++)
	{
		cout << friendsGifts[i] << " ";
	}
	cout << endl;

}
