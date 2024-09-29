#include <iostream>
#include <string>

using namespace std;

bool valid(string s) {
  string stack;
  for (auto c : s) {
    if (c == '(' || c == '[') {
      stack += c;
      continue;
    }
    if (stack.empty()) return false;
    char need = (c == ')') ? '(' : '[';
    if (stack.back() != need) return false;
    stack.pop_back();
  }
  return stack.empty();
}

int main(void) {
  string s;
  cin >> s;
  cout << (valid(s) ? "YES" : "NO") << endl;
  return 0;
}
