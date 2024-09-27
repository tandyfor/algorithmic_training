#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

const string DAYS[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int day_number(string s) {
    return int(find(DAYS, DAYS + 7, s) - DAYS);
}

int main(void) {
    int n;
    cin >> n;
    vector <int> tday(n + 1), thour(n + 1), tprice(n + 1);
    for (int i = 1; i <= n; ++i) {
        string day_s;
        cin >> day_s >> thour[i] >> tprice[i];
        tday[i] = day_number(day_s);
    }
    tprice[0] = tprice[n];
    int k, cost = 0;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        string day_s;
        int hour, mb;
        cin >> day_s >> hour >> mb;
        int day = day_number(day_s);
        int j = 0;
        while (tday[j + 1] < day || tday[j + 1] == day && thour[j + 1] <= hour) ++j;
        cost += mb * tprice[j];
    }
    cout << cost << endl;
    return 0;
}