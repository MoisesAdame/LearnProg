#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
double f(double x){
    return exp(x);
}
int main (){
    //Limit
    double value;
    cin >> value;
    double value_min = value-0.0000000000000001, value_max = value+0.0000000000000001;
    /*
    if(static_cast<float>(f(value_min)) == static_cast<float>(f(value_max))){
        cout << "Limit = " << static_cast<float>(f(value_max)) << endl;
    }
    else if(static_cast<float>(f(value_min)) != static_cast<float>(f(value_max))){
        cout << "Limit does not exist." << endl;
    }
    */
    double m_max = (f(value_max) - f(value))/(value_max - value);
    double m_min = (f(value_min) - f(value))/(value_min - value);
    cout << "m = " << m_max << endl;
    cout << "m = " << m_min << endl;









    return 0;
}