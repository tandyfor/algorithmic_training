#include <iostream>
#include <vector>
#include <string>
#include <sstream>


using namespace std;

int main(void) {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> numbers;
    int x;

    while (ss >> x) {
        numbers.push_back(x - 1);
    }

    int result = 0;

    for (auto i : numbers) {
        if (i == -1) continue;
        int go = i;
        while (go > -1) {
            int temp = numbers[go];
            numbers[go] = -1;
            go = temp;
            if (go == i) {
                result++;
                numbers[go] = -1;
                break;
            }
        }
    }

    cout << result << endl;

    return 0;
}