#include <iostream>
using namespace std;
//Sqrt Function
/*
First, I modeled de distance between the number to sqrt and the actual sqrt, surprisingly
this was a seamingly linear ecuation when plotted, this, was set as the beginning for the
Newton's Method which was set to 100 iterations.
The only problem w/ this algorithm is that for large numbers the lack ofprecision might 
be bigger and bigger.
*/
float sqrt( float x){
    float res = x - 0.9999900001*x -0.9999900001;
    for(int i=0; i<100; ++i){
        res -= ((res*res - x)/(2*res));
    }
    return (res>=0 ? res:-res);
}

//Local values
//Defined as static
//Dies until the prog dies
int f1(int x){
    static int ctr = 0;
    ctr += 3;
    return x + ctr;
} 

int f2(){
    static int cnt = -1;
    ++cnt;
    return cnt;
}

