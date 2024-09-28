#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

void read_rect(int& x1, int& y1, int& x2, int& y2) {
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 > x2) swap(x1, x2);
    if (y1 > y2) swap(y1, y2);
}

int main(void) {
    int ax1, ay1, ax2, ay2;
    read_rect(ax1, ay1, ax2, ay2);
    int bx1, by1, bx2, by2;
    read_rect(bx1, by1, bx2, by2);
    int rx1 = max(ax1, bx1);
    int ry1 = max(ay1, by1);
    int rx2 = min(ax2, bx2);
    int ry2 = min(ay2, by2);
    int s = max(0, rx2 - rx1) * max(0, ry2 - ry1);
    cout << s << endl;
    return 0;
}