#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int flag = -2;
    string line;
    cin >> line;

    vector<char> vecs(line.begin(), line.end());
    for (size_t i = 0; i < line.size(); i++) {
        if (line[i] == 'f') {
            flag++;
        };
        if (flag == 0){
            flag++;
            cout << i << endl;
        }
    }
    if (flag < 0){
        cout << flag << endl;
    }
       
    return 0;
}