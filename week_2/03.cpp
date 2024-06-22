#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool IsPalindrom(string);
vector<string> PalindromFilter(vector<string>, int);
void cout_vector(vector<string>);

int main() {
 
    vector<string> words1 = { "abacaba", "aba"};
    vector<string> words2 = { "abacaba", "aba" };
    vector<string> words3 = { "weew", "bro", "code"};

    cout_vector(PalindromFilter(words1, 5));
    cout_vector(PalindromFilter(words2, 2));
    cout_vector(PalindromFilter(words3, 4));

    return 0;
}

void cout_vector(vector<string> words) {
    cout << "####\n";
    for (string elem : words) {
        std::cout << elem << " ";
    }
    cout << "\n####\n";
}

bool IsPalindrom(string word) {

    string reversed(word.rbegin(), word.rend());

    if (word == reversed) {
        return(true);
    }

    return false;
}

vector<string> PalindromFilter(vector<string> words, int minLength) {

    vector<string> wordsPalindrom;

    for (string word : words) {
        if (IsPalindrom(word) && word.size() >= minLength) {
            wordsPalindrom.push_back(word);
        }
    }
    return wordsPalindrom;
}