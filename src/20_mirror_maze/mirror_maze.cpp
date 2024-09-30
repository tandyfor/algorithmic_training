#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int DELTA[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int main(void) {
  int n, m;
  cin >> n >> m;
  vector<string> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  int x = 0, y = 0, d = 0;
  for (;;) {
    if (a[x][y] == '/') d ^= 3;
    else if (a[x][y] == '\\') d ^= 1;
    int nx = x + DELTA[d][0];
    int ny = y + DELTA[d][1];
    if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
      cout << x + 1 << ' ' << y + 1 << endl;
      return 0;
    }
    x = nx;
    y = ny;
  }
}
