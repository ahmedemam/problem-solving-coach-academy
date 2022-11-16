#include <string>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
  
  string text = "";
  stack<string> operations;
  operations.push(text);

  int tries;
  cin >> tries;

  for (int i = 0; i < tries; i++)
  {

    int option;
    cin >> option;
    if(option == 1){
      string parameter;
      cin >> parameter;
      text.append(parameter);
      operations.push(text);
    }else if(option == 2) {
      int parameter;
      cin >> parameter;
      text.erase(text.size()-parameter, parameter);
      operations.push(text);
    }else if(option == 3){
      int parameter;
      cin >> parameter;
      cout << text[parameter -1] << endl;
    }else if(option == 4){
      operations.pop();
      text = operations.top();
    }
  }
  
}
