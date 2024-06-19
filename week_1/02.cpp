#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  

    string a, b, c;
    cin >> a >> b >> c;

    vector<string> line = {a, b, c};

    sort(begin(line),end(line));

    cout << line[0];
}