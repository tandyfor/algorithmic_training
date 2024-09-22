#include <iostream>

using namespace std;

int main(void) {
    int n, ans;
    cin >> n;
    switch (n % 4){
        case 1: ans = 1; break;
        case 2: ans = n + 1; break;
        case 3: ans = 0; break;
        case 0: ans = n; break;
    }
    cout << ans << endl;
    return 0;
}