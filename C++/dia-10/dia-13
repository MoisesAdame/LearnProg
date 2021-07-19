#include <iostream>
#include <vector>
using namespace std;
int main () {
    cout << "~~~ LINEAR REGRESSION ~~~" << endl;
    //Initializating Vectors
    vector<float> vx;
    vector<float> vy;
    float value_x;
    float value_y;

    //Input of the (x,y)
    cout << "Input x and then y:" << endl;
    while(cin >> value_x){
        vx.push_back(value_x);
        cin >> value_y;
        vy.push_back(value_y);
    }

    //Sum of vx, vx square and vx*vy
    float sum_vx, sum_vx_squared, sum_vx_vy, sum_vy;
    sum_vx = sum_vx_squared = sum_vx_vy = sum_vy = 0;
    size_t counter = 0;
    for(auto &a : vx){
        sum_vx += a;
        sum_vx_squared += (a*a);
        sum_vx_vy += (vy[counter]*a);
        ++counter;
    }
    for(auto &b : vy){
        sum_vy += b;
    }

    //Obtaining m (slope)
    float m = ((((counter)*sum_vx_vy) - (sum_vy*sum_vx))/(((counter)*sum_vx_squared) - (sum_vx*sum_vx)));
    //Obtaining b (coordinate axis)
    float b = (((sum_vy*sum_vx_squared) - (sum_vx*sum_vx_vy))/(((counter)*sum_vx_squared) - (sum_vx*sum_vx)));

    //User Interface
    cout << "y = " << m << "x " << (b>0 ? "+" : "")<< b <<endl;
    return 0;
}