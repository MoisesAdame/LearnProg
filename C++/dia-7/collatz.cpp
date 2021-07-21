#include <iostream>
#include <vector>
using namespace std;

void collatz(int x){
    while(x > 1){
        if(x%2 == 0){
            x = x/2;
            cout << x << " ";
            collatz(x);
        }
        else if(x%2 != 0){
            x = 3*x +1;
            cout << x << " ";
            collatz(x);
        }
        break;
    }
}
int main (){
    cout << "Input Collatz: ";
    int value;
    cin >> value;
    collatz(value);
    cout << endl;
    return 0;
}