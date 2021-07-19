#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool indexv (vector<int> v1, vector<int> v2){
    size_t size1 = v1.size(), size2 = v2.size();
    if(size1 > size2){
        int counter = 0;
        bool res = true;
        for(auto &c : v2){
            res &= (c == v1[counter]);
            ++counter;
        }
        return res;
    }
    else {
        int counter = 0;
        bool res = true;
        for(auto &c : v1){
            res &= (c == v2[counter]);
            ++counter;
        }
        return res;
    }
}
int main () {
    //The for-loop
    vector<float> v{0,1,2,3,4,5,6,7,8,9,10};
    //Sqrt of all the elements of v (Traditional way)
    for(auto beg = v.begin(), end = v.end(); beg != end; ++beg){
        auto &r = *beg;
        r = sqrt(r);
    }
    //Square all the elements of v (The c++11 way).
    for(auto &r : v){
        r *= r;
    }
    vector<int> vec1 = {0,1,1,2}, vec2 = {0,1,1,2,3,5,8};
    
    //The do-while Statement
    //General Form:
    /*do{
        statement
      }
      while(cond);
    */
   



    return 0;
}