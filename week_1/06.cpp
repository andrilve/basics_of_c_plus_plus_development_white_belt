#include <iostream>
using namespace std;

int main() {
    int a,b, i;

    cin >> a >> b;

    for (i = a ; i <= b; i++) // ������ ��������� �������� 1, �������� 1000 � ������ ��� ����� - 1.
    {
        if (a % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}