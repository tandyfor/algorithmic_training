#include <iostream>

using namespace std;

const int FIELD = 102;

int main(void) {
    int n;
    cin >> n;
    int a[FIELD][FIELD] = {0};
    for (int i = 0; i < n; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1 - 1; x <= x2 + 1; ++x) {
            for (int y = y1 - 1; y <= y2 + 1; ++y) {
                if (a[x][y] == 1) {
                    cout << "BAD" << endl;
                    return 0;
                }
                a[x][y] == 2;
            }
        }
        for (int x = x1; x <= x2; ++x) {
            for (int y = y1; y <= y2; ++y) {
                a[x][y] = 1;
            }
        }
    }
    cout << "OK" << endl;
    return 0;
}