#include <iostream>
using namespace std;
int main () {
    int val, pos_count =0, neg_count =0, zero_count =0;
    cout << "Input positive and negative numbers, to exit press (q)\n";
    while (cin >> val){
        if(val>0){
            pos_count++;
        }
        else if(val<0){
            neg_count++;
        }
        else if(val == 0){
            zero_count++;
        }
    }
    cout << "There were:\n" <<"\t* " <<pos_count <<" positive numbers.\n";
    cout <<"\t* " <<neg_count <<" negative numbers.\n";
    cout <<"\t* " <<zero_count <<" zeroes.\n";

    return 0;
}