#include <iostream>
using namespace std;
int main () {
    //Goto Statement
    //General form: goto label;
    //General form of a labeled statemt: goto label;
    int init = 10, count = 0;
    begin:
        if(init != 0){
            ++count;
            --init;
            goto begin;
        }
    //Error handling
    //cerr function
    int value;
    cout << "Input a number: ";
    cin >> value;
    if(isnumber(value)){
        ; //Null Statement
    }
    else{
        cerr << "Not a number" << endl;
        return -1;
    }

    
    




    return 0;
}