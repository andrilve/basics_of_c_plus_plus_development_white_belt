#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a, b, c;
    double d;
    cin >> a >> b >> c;

    d = pow(b,2) - 4 * a * c;

    if (a == 0) {
        if (b != 0) {
           cout << -c / b << endl;
        }
    }
    else if (d==0) {
        cout << (-b + sqrt(d)) / (2 * a) << endl;
    }
    else if (d > 0) {
        cout << (-b + sqrt(d)) / (2 * a) << " " << (-b - sqrt(d)) / (2 * a) << endl;
    }
    else {
        cout << "There are no solutions!\n" << endl;
    }

    return 0;
}