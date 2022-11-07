#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int dayStart, dayEnd, divisor;
  cin >> dayStart >> dayEnd >> divisor;
  int count = 0;
  for (int i = dayStart; i <= dayEnd; i++)
  {
    string reversedNumber = to_string(i);
    reverse(reversedNumber.begin(), reversedNumber.end());
    float day = (float)(i - (stoi(reversedNumber))) / (float)divisor;
    if(day == (int) day){
      count++;
    }
  }

  cout << count << endl; 
}
