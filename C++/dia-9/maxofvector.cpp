#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int max(vector<int> v){
    //Max
    int max = *(v.begin());
    for(auto &cnt : v){
        if(max < cnt){
            max = cnt;
        }
    }
    return max;
}

int main (){
    //Input
    cout << "Input a few numbers to order them. To end press(ctrl+d):\n";
    int value;
    vector<int> v_unordered;
    while(cin >> value){
        v_unordered.push_back(value);
    }

    cout << "Max num: "<<max(v_unordered) <<"\n";
    return 0;
}