#include <iostream>
#include <vector>
using namespace std;

void goldbach(int x){
    while(x > 1){
        if(x%2 == 0){
            x = x/2;
            cout << x << " ";
            goldbach(x);
        }
        else if(x%2 != 0){
            x = 3*x +1;
            cout << x << " ";
            goldbach(x);
        }
        break;
    }
}
int main (){
    for(int i=0; i<100; i++){
        cout << i+2 <<": ";
        goldbach(i+2);
        cout << "\n";
    }
    return 0;
}