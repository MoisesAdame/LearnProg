#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int main () {
    cout << "START: ";
    cin.get();
    time_t start = time(0);
    cout << "STOP: ";
    cin.get();
    time_t stop = time(0);
    time_t time_elapsed = stop - start;
    int days = floor(time_elapsed/518400);
    int hours = floor((time_elapsed - days*518400)/3600);
    int minutes =  floor((time_elapsed - days*518400 - hours*3600)/60);
    int seconds = (time_elapsed - days*518400 - hours*3600 - minutes*60);



    cout << days << ":" <<hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
