#include <iostream>
using namespace std;

int main() {
    int a,b, i;

    cin >> a >> b;

    for (i = a ; i <= b; i++) // задаем начальное значение 1, конечное 1000 и задаем шаг цикла - 1.
    {
        if (a % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}