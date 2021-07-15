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
    float sum_vx, sum_vx_squared, sum_vx_vy, sum_vy, counter;
    sum_vx = sum_vx_squared = sum_vx_vy = sum_vy = counter = 0;
    for(auto &a : vx){
        sum_vx += a;
        sum_vx_squared += (a*a);
        for(auto &b : vy){
            sum_vx_vy += (b*a);
            sum_vy += b;
        }
        ++counter;
    }

    //Obtaining m (slope)
    float a = ((sum_vy*sum_vx_squared) - (sum_vx*sum_vx_vy));
    float b = (((counter)*sum_vx_squared) - (sum_vx*sum_vx));
    float c = (((counter)*sum_vx_vy) - (sum_vy*sum_vx));
    float d = (((counter)*sum_vx_squared) - (sum_vx*sum_vx));

    float m = a/b;
    float b_b = c/d;

    cout << "y = " << m << "x +" << b_b <<endl;
    return 0;
}