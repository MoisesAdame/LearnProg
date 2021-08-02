#include <iostream>
using namespace std;

int countTrue(initializer_list<bool> v){
    int count = 0;
    for(auto &e : v){
        if(e == true){
            ++count;
        }
        else{
            continue;
        }
    }
    return count;
}




