#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int wordLength;
  cin >> wordLength;
  string word;
  cin >> word;
  if(wordLength < 26){
    cout << "NO" << endl;
  }
  else{
    int alphabet[26] = {0};
    for(int i = 0; i < wordLength; i++){
      if(word[i] >= 65 && word[i] <= 90){
        alphabet[word[i] - 65]++;
      }
      else if(word[i] >= 97 && word[i] <= 122){
        alphabet[word[i] - 97]++;
      }
    }
    for(int i = 0; i < 26; i++){
      if(alphabet[i] == 0){
        cout << "NO" << endl;
        return 0;
      }
    }
    cout << "YES" << endl;
  }

}
