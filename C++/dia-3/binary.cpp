#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int num = 5;
    int* ptr = *num;
    cout << "Normal:  " <<num <<"\n";
    cout << "Pointer: " <<ptr <<"\n";
}
