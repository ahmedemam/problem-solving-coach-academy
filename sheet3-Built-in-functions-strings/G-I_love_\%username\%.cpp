#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int performanceNumbers;
  cin >> performanceNumbers;
  int points[performanceNumbers];
  int min, max, best = 0;
  for (int i = 0; i < performanceNumbers; i++)
  {
    cin >> points[i];
    if(i==0){
      min = points[i];
      max = points[i];
    }
    if (points[i] < min)
    {
      min = points[i];
      best++;
    }
    if (points[i] > max)
    {
      max = points[i];
      best++;
    }
  }
  cout << best << endl;
}
