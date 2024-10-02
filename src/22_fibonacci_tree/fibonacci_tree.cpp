#include <iostream>

using namespace std;

int fibonacci(int n) {
    long int temp = 0;
    long int a = 0;
    long int b = 1;

    for (int i = 1; i < n; ++i) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main(void) {
    int n = 0;
    cin >> n;
    long int result = 0;
    for (int i = 1; i < n; ++i) {
        result += fibonacci(i);
    }
    cout << result << endl;
    return 0;
}