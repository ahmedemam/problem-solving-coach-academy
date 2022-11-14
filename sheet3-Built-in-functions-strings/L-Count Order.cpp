#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int number;
  cin >> number;
  int permutationNumbers[number];
  int p[number];
  int q[number];

  for (int i = 0; i < number; i++)
  {
    cin >> p[i];
    permutationNumbers[i]= i+1;
  }
  for (int i = 0; i < number; i++)
  {
    cin >> q[i];
  }

  int pOrder = 0;
  int qOrder = 0;
  int count = 0;
  do {
    count++;
    if (equal(p, p + number, permutationNumbers))
    { 
      pOrder = count;
    }
    if (equal(q, q + number, permutationNumbers))
    {
      qOrder = count;
    }
  } while (next_permutation(permutationNumbers, permutationNumbers + number));

  cout << abs(pOrder - qOrder) << endl;
}
