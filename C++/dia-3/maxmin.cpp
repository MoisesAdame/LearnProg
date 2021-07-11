#include <iostream>
#include <ctime>
using namespace std;
float f(float x){
    return x*x;
}
float f_der(float x){
    return 2*x;
}
int main () {
    srand(time(NULL));
    float a = rand();
    while(!(f_der(a)<0.01 && f_der(a)>-0.01)){
        if(f_der(a)>0){
            a -= 0.0001;
        }
        else if(f_der(a)<0){
            a += 0.0001;
        }
    }
    cout << "The maxima is in: (" << a <<", " << f(a) <<")\n";
    return 0;
}