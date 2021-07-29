#include <iostream>
using namespace std;
int sum(initializer_list<int> ls){
    int sum = 0;
    for(auto &e : ls){
        sum += e;
    }
    return sum;
}

int main () {
    cout << sum({1,2,3,4,5,6,7,8,9,10}) << endl;
    return 0;
}
