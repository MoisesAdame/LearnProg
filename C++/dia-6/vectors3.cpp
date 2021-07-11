#include <iostream>
#include <vector>
using namespace std;
int main () {
    int value;
    vector<int> v1;
    while (cin >> value){
        v1.push_back(value);
    }
    for(int i=0; i<v1.size(); i++){
        cout << "Sums:" <<"\n";
        cout << v1[i]+v1[v1.size()-i-1] << "\n";
    }
    return 0;
}