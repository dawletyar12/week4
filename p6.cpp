#include <iostream>
#include <string>
using namespace std;

int main() {
    string t;
    cin >> t;

    char h1 = t[0], h2 = t[1], m1 = t[3], m2 = t[4];

    int hours;
    if (h1 == '?' && h2 == '?') {
        hours = 24;
    } else if (h1 == '?') {
        if (h2 <= '3') hours = 3;
        else hours = 2;
    } else if (h2 == '?') {
        if (h1 == '2') hours = 4;
        else hours = 10;
    } else {
        hours = 1;
    }

    int minutes = 1;
    if (m1 == '?') minutes *= 6;
    if (m2 == '?') minutes *= 10;

    cout << hours * minutes << endl;
    return 0;
}