#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int numbers;
  string word;
  cin >> numbers;
  for (int i = 0; i < numbers; i++)
  {
    cin >> word;
    string shorter = "";
    shorter+= word[0];
    for (int j = 1; j < word.length(); j+=2)
    {
      shorter+= word[j];
    }
    cout << shorter << endl;
  }
}
