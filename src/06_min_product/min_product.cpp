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
    long int res1 = v[0] * v[1];
    long int res2 = v[n - 1] * v[n - 2];
    long int res3 = v[0] * v[n - 1];
    cout << min(res1, min(res2, res3)) << endl;
    return 0;
}