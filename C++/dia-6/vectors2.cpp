#include <iostream>
#include <string>
#include <cmath>
#include <vector>
int main () {
    using namespace std;
    cout << "Input Words:" << "\n";
    string word, line;
    vector<string> words_to_upper;
    
    while(cin >> word){
        for(auto &c : word){
            c = toupper(c);
        }
        line += (" " + word);

    }
    cout << line << "\n";

    vector<int> v1(10,42);
    vector<int> v2(v1);
    vector<int> v3{42,42,42,42,42,42,42,42,42,42};

    return 0;
}
