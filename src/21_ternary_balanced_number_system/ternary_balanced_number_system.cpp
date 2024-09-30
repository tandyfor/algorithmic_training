#include <iostream>
#include <string>

using namespace std;

int main(void) {
  int n;
  cin >> n;
  string ans = n ? "" : "0";
  while (n) {
    int cur = n % 3;
    n /=  3;
    ans = "0+-"[cur] + ans;
    if (cur == 2) ++n;
  }
  cout << ans << endl;
  return 0;
}
