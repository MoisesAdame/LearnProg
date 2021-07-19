#include <iostream>
#include <vector>
using namespace std;
int main () {
    cout << "Input a series of words, the one with the most reppetitions will be printed:" << endl;
    string value;
    vector<string> v;
    int rep = 0;
    while(cin >> value){
        v.push_back(value);
    }
    string arr[v.size()];
    int counter = 0;
    for(auto &c : v){
        if(c == *(&c +1)){
            ++counter;
        }
        else{
            arr[counter] = *(&c -1);
            counter = 0;
        }
    }
    int selection;
    for(int i = 0; i<v.size(); ++i ){
        if(arr[i] == ""){
            selection = i;
            break;
        }
    }
    cout << "The word " << arr[selection-1] << " repeated " << selection << " times." << endl;

    return 0;
}