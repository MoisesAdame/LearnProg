#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
    long double sum = 0.0;
    for(int i=1; i<=999; i++){
        sum += ((pow(-1, i-1))/(i));
    }
    cout << setprecision(9) << sum <<"\n";
    return 0;
}