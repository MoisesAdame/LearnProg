#include <iostream>
using namespace std;
int main (){
    
    /*
    Infinite input sum (when input != int whilecondition == F)
    int value = 0, sum = 0;
    cout << "Give me some numbers. To Stop press any key: \n";
    while(cin >> value){
        sum += value;
    }
    cout << "The sum is equal to: " << sum <<"\n";
    */

    int value, cntr = 0, pnt=0;
    int vals[] = {};
    while (cin >> value){
        vals[cntr] = value;
        cntr++;
    }
    for (int i=0; i<cntr; i++){
        for (int j=0; j<cntr; j++){
            if (vals[i]==vals[j]){
                pnt++;
            }
        }
        cout << vals[i] << "repeats " << pnt << "times.\n";
    }
    return 0;
}