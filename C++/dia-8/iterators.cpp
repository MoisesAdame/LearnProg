#include <iostream>
#include <vector>
using namespace std;

void search(vector<int> v, int x){
    int counter = 0;
    for (auto c:v){
        if(c == x){
            cout << counter << "\n";
            break;
        }
        counter++;
    }
    if(counter>=v.size()){
        cout << "Error" << "\n";;
    }
}

int main () {
    vector<int> v1 = {12,15,3,2,8,21,7,3,9,1,0};
    search(v1,22);



    return 0;
}