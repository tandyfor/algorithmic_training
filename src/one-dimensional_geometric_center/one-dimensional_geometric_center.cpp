#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = a[n / 2];
    cout << ans << endl;
    return 0;
}