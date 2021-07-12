#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main () {
    //Defyning vetor
    vector <int> vec1, vec2;
    int value;
    while(cin >> value){
        vec1.push_back(value);
    }
    for(auto i = vec1.begin(); i != vec1.end()-1; i++){
        vec2.push_back(abs(*(i) - *(i +1)));
    }
    int counter = 0;
    for(auto v1 : vec1){
        for(auto v2 : vec2){
            if(v1 == v2){
                counter++;
            }
        }
    }
    if(counter == vec2.size()){
        cout << "Jolly\n";
    }
    else{
        cout << "Not Jolly\n";
    }
    return 0;
}