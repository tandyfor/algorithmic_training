#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    long int a, b;
    cin >> a >> b;
    a /= 10;
    b /= 10;
    cout << min(min(a, b), (a + b) / 3) << endl;
    return 0;
}