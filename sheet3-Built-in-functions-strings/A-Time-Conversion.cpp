#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  string time;
  cin >> time;
  int hours = stoi(time.substr(0, 2));
  string TIME_DAY = time.substr(time.length() - 2, 2);
  if (TIME_DAY == "PM" && hours != 12)
    hours += 12;
  if (TIME_DAY == "AM" && hours == 12)
    hours = 0;
  cout << setw(2) << setfill('0') << hours << time.substr(2, 6);
  return 0;
}
