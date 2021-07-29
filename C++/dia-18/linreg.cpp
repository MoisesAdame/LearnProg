/*

SIMPLE LINEAR REGRESSION FUNCTION (linreg())
Header:  #include "linreg.cpp" (Not necessary to include <vector>)
Ex. Use: linreg({{2,3.45},{4.3,5.67},{8.1,6.66},{9.7,8.2}});

*/

#include <iostream>
#include <vector>
using namespace std;
void linreg(initializer_list<initializer_list<float>> ls){
    vector<float> vx;
    vector<float> vy;
    //Sum of vx, vx square and vx*vy
    float sum_vx, sum_vx_squared, sum_vx_vy, sum_vy;
    sum_vx = sum_vx_squared = sum_vx_vy = sum_vy = 0;
    size_t counter_in = 0;
    int counter_out = 0;
    for(auto &e1 : ls){
        for(auto &e2 : e1){
            if(counter_out%2 == 0){
                vx.push_back(e2);
            }
            else if (counter_out%2 != 0){
                vy.push_back(e2);
            }
            ++counter_out;
        }
    }

    for(auto &a : vx){
        sum_vx += a;
        sum_vx_squared += (a*a);
        sum_vx_vy += (vy[counter_in]*a);
        ++counter_in;
    }
    for(auto &b : vy){
        sum_vy += b;
    }
    //Obtaining m (slope)
    float m = ((((counter_in)*sum_vx_vy) - (sum_vy*sum_vx))/(((counter_in)*sum_vx_squared) - (sum_vx*sum_vx)));
    //Obtaining b (coordinate axis)
    float b = (((sum_vy*sum_vx_squared) - (sum_vx*sum_vx_vy))/(((counter_in)*sum_vx_squared) - (sum_vx*sum_vx)));

    //User Interface
    cout << "y = " << m << "x " << (b>0 ? "+" : "")<< b <<endl;
}
