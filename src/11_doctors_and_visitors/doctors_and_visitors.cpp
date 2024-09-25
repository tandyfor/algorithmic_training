#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int visitors[n][2];
    for (int i = 0; i < n; ++i) cin >> visitors[i][0] >> visitors[i][1];
    // for (int i = 0; i < n; ++i) cout << visitors[i][0] << " " << visitors[i][1] << endl;
    int a = 0;
    int b = 0;
    int l, r;
    string result = "";
    for (int i = 0; i < n; ++i) {
        l = visitors[i][0];
        r = visitors[i][1];
        if (l-a >= 0 && (l-b < 0 || l-a <= l-b)) {
            a = r;
            result += 'A';
        } else if (l-b >= 0 && (l-a < 0 || l-a > l-b)){
            b = r;
            result += 'B';
        } else {
            result = "No solution";
            break;
        }
    }
    cout << result << endl;
    return 0;
}