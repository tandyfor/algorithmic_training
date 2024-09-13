#include <iostream>

using namespace std;

int main(void) {
    int x1, y1;
    int x2, y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    cout << abs(x2 - x1) + abs(y2 - y1) << endl;
    return 0;
}