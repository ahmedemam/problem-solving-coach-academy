// #include <string>
// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//   // int tries;
//   // cin >> tries;
//   // for (int j = 0; j < tries; j++)
//   // {
//   //   string brackets;
//   //   cin >> brackets;
//   //   stack<char> s;
//   //   for (int i = 0; i < brackets.length(); i++)
//   //   {
//   //     char currentBracket = brackets[i];
//   //     if (currentBracket == '{' || currentBracket == '[' || currentBracket == '(')
//   //     {
//   //       s.push(currentBracket);
//   //     }
//   //     else
//   //     {
//   //       if (s.empty())
//   //       {
//   //         cout << "NO" << endl;
//   //         continue;;
//   //       }
//   //       char topBracket = s.top();
//   //       if (currentBracket == '}' && topBracket == '{')
//   //       {
//   //         s.pop();
//   //       }
//   //       else if (currentBracket == ']' && topBracket == '[')
//   //       {
//   //         s.pop();
//   //       }
//   //       else if (currentBracket == ')' && topBracket == '(')
//   //       {
//   //         s.pop();
//   //       }
//   //     }
//   //   }
//   //   if (s.empty())
//   //   {
//   //     cout << "YES" << endl;
//   //   }
//   //   else
//   //   {
//   //     cout << "NO" << endl;
//   //   }
//   // }

//   int tries;
//   cin >> tries;
//   for (int i = 0; i < tries; i++)
//   {
//     string brackets;
//     cin >> brackets;
//     if (brackets.length() % 2 != 0)
//     {
//       cout << "NO" << endl;
//       continue;
//     }
//     else
//     {
//       string leftBrackets = brackets.substr(0, brackets.length() / 2);
//       string rightBrackets = brackets.substr(brackets.length() / 2, brackets.length() / 2);
//       reverse(rightBrackets.begin(), rightBrackets.end());
//       for (int j = 0; j < rightBrackets.length(); j++)
//       {
//         if (rightBrackets[j] == ')')
//         {
//           rightBrackets[j] = '(';
//         }
//         else if (rightBrackets[j] == '}')
//         {
//           rightBrackets[j] = '{';
//         }
//         else if (rightBrackets[j] == ']')
//         {
//           rightBrackets[j] = '[';
//         }
//       }
//       if (leftBrackets == rightBrackets)
//       {
//         cout << "YES" << endl;
//       }
//       else
//       {
//         cout << "NO" << endl;
//       }
//     }
//   }
// }

#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s) {
    std::vector<char> stack;
    bool flag = false;
    for(int i = 0; (i < s.length()) && !flag; i++){
        
        switch(s[i]){
            case '{':
                stack.push_back(s[i]);
                break;
            case '[':
                stack.push_back(s[i]);
                break;
            case '(':
                stack.push_back(s[i]);
                break;
                
            case '}':
                if(stack.size() == 0){
                    flag=true;
                }
                else if('{' != stack.back()){
                    flag=true;
                }
                else{
                    stack.pop_back();
                }
                break;
                
             case ']':
                if(stack.size() == 0){
                    flag=true;
                }
                else if('[' != stack.back()){
                    flag=true;
                }
                else{
                    stack.pop_back();
                }
                break;
                
              case ')':
                if(stack.size() == 0){
                    flag=true;
                }
                else if('(' != stack.back()){
                    flag=true;
                }
                else{
                    stack.pop_back();
                }
                break; 
        }
    }
    return (flag || (stack.size() != 0)) ? "NO" : "YES";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}
