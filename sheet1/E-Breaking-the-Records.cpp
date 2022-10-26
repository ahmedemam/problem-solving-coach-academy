#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int scoreNumbers;
	cin >> scoreNumbers;

	int max = INT_MIN;
	int min = INT_MAX;
	int leastScoreCount = 0;
	int mostScoreCount = 0;
	int scores[scoreNumbers];

	for(int i=0; i < scoreNumbers; i++){
		cin >> scores[i];
		if(i == 0){
			max = scores[i];
			min = scores[i];
		}
		if(scores[i] > max) {
			max = scores[i];
			mostScoreCount++;
		}
		if(scores[i] < min){
			min = scores[i];
			leastScoreCount++;
		}
	}

	cout << mostScoreCount << " " << leastScoreCount << endl;
}
