#include <iostream>
#include <vector>
#include <string>
#include <sstream>


using namespace std;

int main(void) {
    string line;
    vector<int> numbers;

    getline(cin, line);
    stringstream ss(line);
    char delim = ' ';
    string tok;

    while (getline (ss, tok, delim)) {
        numbers.push_back (stoi(tok));
    }

    vector<int> cnt(numbers.size());
    bool result = true;

    for (auto x : numbers) {
        if (x > numbers.size() || cnt[x - 1]) {
            result = false;
        } else {
            ++cnt[x - 1];
        }
    }

    cout << (result? "OK" : "BAD") << endl;
    
    return 0;
}
