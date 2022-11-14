#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int banknotes;
  cin >> banknotes;
  int currency[banknotes];
  for (int i = 0; i < banknotes; i++)
  {
    cin >> currency[i];
    if(currency[i] == 1){
      cout << -1 << endl;
      return 0;
    }
  }
  cout << 1 << endl;
}
