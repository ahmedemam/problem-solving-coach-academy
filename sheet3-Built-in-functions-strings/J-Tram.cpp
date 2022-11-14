#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int numbers;
  cin >> numbers;
  int allPassengers = 0;
  int total = 0;
  for (int i = 0; i < numbers; i++)
  {
    int a, b;
    cin >> a >> b;
    allPassengers -= a;
    allPassengers += b;
    if(allPassengers > total)
    {
      total = allPassengers;
    }
  }
  cout << total << endl;
}
