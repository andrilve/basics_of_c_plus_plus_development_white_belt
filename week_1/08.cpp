#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b;

    while (a != b) {
        int maxi = max(a, b);
        int mini = min(a, b);
        int c = maxi - mini;
        a = mini;
        b = c;
    };
    cout << a << endl;
    return 0;
}