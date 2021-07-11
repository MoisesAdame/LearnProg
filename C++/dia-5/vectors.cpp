#include <iostream>
#include <vector>
using namespace std;
int main() {
    //Initializing Vectors
    vector<int> v1 = {1,2,3,4,5};   //Traditional
    vector<int> v2(v1);             //Copying v1 into v2
    vector<int> v3{1,2,3,4,5};      //Traditional without =
    vector<int> v4(5,13);           //v4 = {13,13,13,13,13}
    vector<vector<int>> v5{{1,2,3},{4,5,6},{7,8,9}};
    
    //Adding elements to a vector
    v1.push_back(6);                //Añade 6 al final de v1
    
    //Infinite Input for a Vector
    int value;
    vector<int> inf_v;
    while(cin >> value){
        inf_v.push_back(value);
    }
    
    
    return 0;
}
