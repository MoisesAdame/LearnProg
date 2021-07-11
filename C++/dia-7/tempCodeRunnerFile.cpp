#include <iostream>
#include <ctime>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
    int dimmer;
    cin >> dimmer;
    //Seed
    auto seed = clock();
    srand(seed);

    vector<float> x_vec;
    vector<float> y_vec;
    float inside_points = 0;
    
    for(int i=0; i<dimmer; i++){
        float a = rand()%10001;
        float b = rand()%10001;

        
        //Float
        float x = a/10000;
        float y = b/10000;
        //Vector
        x_vec.push_back(x);
        y_vec.push_back(y);

        float area = pow(x_vec[i],2)+pow(y_vec[i],2);

        if (area < 1){
            inside_points++;
        } 
    }
    cout << setprecision(5) << ((inside_points*4)/dimmer) << "\n";









    return 0;
}