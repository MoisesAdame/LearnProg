#include <iostream>
#include "linreg.cpp"
using namespace std;
int sum(initializer_list<int> ls){
    int sum = 0;
    for(auto &e : ls){
        sum += e;
    }
    return sum;
}

int main () {
    linreg({{2,3.45},{4.3,5.67},{8.1,6.66},{9.7,8.2}});
    return 0;
}
