#include <iostream>
using namespace std;
int main (){
    int base, height;
    char symbol;
    cout << "Base: ";
    cin >> base;
    cout << "Height: ";
    cin >> height;
    cout << "Symbol: ";
    cin >> symbol;
    for(int i = 0; i<height; ++i ){
        for(int j = 0; j < base; ++j){
            cout << symbol << " ";
        }
        cout << endl;
    }
    return 0;
}