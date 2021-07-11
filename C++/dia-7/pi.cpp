#include <iostream>
#include <ctime>
#include <vector>
#include <iomanip>
using namespace std;
int main () {
    int dimmer;
    cin >> dimmer;
    //Seed
    int seed = clock();
    srand(seed);

    vector<double> x_vec;
    vector<double> y_vec;
    double inside_points = 0;
    
    for(int i=0; i<dimmer; i++){
        double a = rand()%10001;
        double b = rand()%10001;
        //Double
        double x = a/10000;
        double y = b/10000;
        //Vector
        x_vec.push_back(x);
        y_vec.push_back(y);

        double area = x_vec[i]*x_vec[i] + y_vec[i]*y_vec[i];

        if (area < 1){
            inside_points++;
        } 
    }
    cout << setprecision(10) << ((inside_points*4)/dimmer) << "\n";
    return 0;
}