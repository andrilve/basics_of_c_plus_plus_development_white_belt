#include <iostream>
#include <string>

using namespace std;

bool IsPalindrom(string word);

int main() {
    string s;

    cin >> s;

    cout << IsPalindrom(s);
    return 0;
}

bool IsPalindrom(string word) {
    
    string reversed(word.rbegin(), word.rend());

    if (word == reversed) {
        return(true);
    }

    return false;
}
