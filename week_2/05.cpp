#include <iostream>
#include <vector>

using namespace std;

void MoveStrings(vector<string>& , vector<string>& );
void cout_vector(vector<string>);

int main() {
    vector<string> source = { "a", "b", "c" };
    vector<string> destination = { "z" };
    MoveStrings(source, destination);

    cout_vector(source);
    cout_vector(destination);

    return 0;
}

void MoveStrings(vector<string>& source , vector<string>& destination) {
    
    destination.insert(destination.end(), source.begin(), source.end());
    source.clear();
}

void cout_vector(vector<string> words) {
    cout << "###\n";
    for (string elem : words) {
        std::cout << elem << " ";
    }
    cout << "\n####\n";
}