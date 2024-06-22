#include <iostream>
using namespace std;

void UpdateIfGreater(const int&, int&);

int main() {
    int a = 4;
    int b = 2;
    UpdateIfGreater(a, b);
    cout << b << endl;
    return 0;
}

void UpdateIfGreater(const int& first, int& second) {
    if (first > second) {
        second = first;
    }
}