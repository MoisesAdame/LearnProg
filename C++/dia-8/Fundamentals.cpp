#include <iostream>
using namespace std;
void parity(int x){
    if(x%2 == 0){
    cout << x << " is even.\n";
    }
    else{
    cout << x << " is odd.\n";
    }
}

int main () {
    for (int i=0; i<10; i++){
        parity(i);
    }

    return 0;
}