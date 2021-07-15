#include <iostream>
#include <ctime>
using namespace std;

int abs(char x){
    return (0b01111111111111111111111111111111 & x);
}

int main () {
    cout << abs(-212) << endl; 
    cout << clock() << endl;
    return 0;
}
