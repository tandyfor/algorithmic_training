#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n, k;
    cin >> n >> k;

    int i = max(n / k, 1);
    int result_1 = abs(n - k * i);
    i++;
    int result_2 = abs(n - k * i);
    cout << min(result_1, result_2) << endl;
    return 0;
}