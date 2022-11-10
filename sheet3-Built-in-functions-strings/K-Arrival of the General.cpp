#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int nChores, kOfChores, xUnit;
  cin >> nChores >> kOfChores >> xUnit;
  int chore;
  int total = 0;
  int numberOfChoresBasedK = nChores - kOfChores;
  for(int i = 0; i<numberOfChoresBasedK; i++){
    cin >> chore;
    total+=chore;
  }

  for(int i=0; i<kOfChores; i++){
    cin >> chore;
    total+=xUnit;
  }

  cout << total << endl;
}
