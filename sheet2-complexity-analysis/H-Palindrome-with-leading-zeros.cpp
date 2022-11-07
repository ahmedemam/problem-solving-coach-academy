#include <string>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  string number;
  cin >> number;
  string reverseNumber = number;
  reverse(number.begin(), number.end());
  if (number == reverseNumber)
  {
    cout << "Yes" << endl;
  }
  int count = 0;
  int length = reverseNumber.length();
  for (int i = 1; i <= length; i++)
  {
    if (reverseNumber[i] == '0')
    {
      count += 1;
    }
  }

  for (int i = 1; i <= count; i++)
  {
    reverseNumber = '0' + reverseNumber;
  }
  string reverseNumber2 = reverseNumber;
  reverse(reverseNumber.begin(), reverseNumber.end());
  if (reverseNumber2 == reverseNumber)
  {
    cout << "Yes" << endl;
    return 0;
  }
  else
  {
    cout << "No" << endl;
    return 0;
  }
}
