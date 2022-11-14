#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  string berlandishWord;
  cin >> berlandishWord;
  string birlandishWord;
  cin >> birlandishWord;
  reverse(birlandishWord.begin(), birlandishWord.end());
  if(berlandishWord == birlandishWord){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
