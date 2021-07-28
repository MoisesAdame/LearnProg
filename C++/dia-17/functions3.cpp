#include <iostream>
using namespace std;

bool capitalize(string &s){
    int count = 0;
    for(auto &c : s){
        if(isupper(c)){
            ++count;
        }
        c = toupper(c);
    }
    return (count>0 ? true:false);
}




using namespace std;
int main () {
    string str1("Moy es un conejo");
    cout << capitalize(str1) << endl;
    cout << str1 << endl;
    return 0;
}