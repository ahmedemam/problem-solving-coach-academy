#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int cubes;
  cin >> cubes;
  int cube[cubes];
  for (int i = 0; i < cubes; i++)
  {
    cin >> cube[i];
  }

  sort(cube, cube + cubes);
  for(int i=0; i<cubes; i++){
    cout << cube[i] << " ";
  }
  cout << endl;
}
