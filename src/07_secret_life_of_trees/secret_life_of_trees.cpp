#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int ans = 0;

    for (int i = 0; i < n; i++) {
        ans = (ans < v[i] - i) ? v[i] - i : ans; 
    }

    cout << ans << endl;

    return 0;
}