#include <iostream>
#include <string>

using namespace std;

bool valid(string s) {
  int balance = 0;
  for (auto c : s) {
    if (c == '(') ++balance;
    else --balance;
    
    if (balance < 0) break;
  }
  return balance == 0;
}

int main(void) {
  string s;
  cin >> s;
  string result = valid(s) ? "YES" : "NO";
  cout << result << endl;
  return 0;
}
