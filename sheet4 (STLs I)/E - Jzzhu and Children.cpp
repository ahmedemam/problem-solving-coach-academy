#include <string>
#include <iostream>
#include <queue>

using namespace std;

int main()
{
  int childsNumber, candiesPerTurn;
  cin >> childsNumber >> candiesPerTurn;
  queue<int> childsIndex;
  int lastIndex = 0;
  for (int i = 0; i < childsNumber; i++)
  {
    int childCandy;
    cin >> childCandy;
    if(childCandy + candiesPerTurn < i)
    {
      childsIndex.push(i);
    }

    lastIndex = i;
  }

  while(!childsIndex.empty())
  {
    cout << childsIndex.front() << " ";
    childsIndex.pop();
  }

  cout << lastIndex + 1 << endl;
}
