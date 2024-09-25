#include <iostream>
#include <vector>
#include <string>
#include <sstream>


using namespace std;

int main(void) {
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> cnt(n + 1);

    for (auto x : v) {
        if (x <= n) ++cnt[x];
    }

    vector<int> free;
    for (int i = 1; i <= n; i++) {
        if (!cnt[i]) free.push_back(i);
    }

    cout << free.size() << endl;

    for (auto x : v) {
        if (x <= n) {
            --cnt[x];
        }
        if (x > n || cnt[x]) {
            x = free.back();
            free.pop_back();
        }

        cout << x << " ";

    }

    cout << endl;

    return 0;
}