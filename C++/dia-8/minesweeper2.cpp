#include <iostream>
#include <vector>
using namespace std;
int main () {
    //Input 1
    int rows, columns;
    cout << "Rows: ";
    cin >> rows;
    cout << "Columns: ";
    cin >> columns;

    //Defyning Vectors
    vector<string>  board_s;
    vector<int>     board_i(rows*columns);

    //Input 2
    string value;
    for(int i = 0; i<board_i.size(); i++){
        while(cin >> value){
            board_s.push_back(value);
            break;
        }
    }

    //Logic
    auto center = board_i.begin();
    int count_board_c = 0;
    
    for(auto &c : board_s){
        if(c == "*"){
            (*center)+=9;
        }
        else if(*(&c +1) == "*" && count_board_c%columns != columns-1){
            (*center)++;
        }
        else if(*(&c -1) == "*" && count_board_c%columns != 0 ){
            (*center)++;
        }


        count_board_c++;
        center++;
    }


    int count_print = 0;
    for(auto c : board_i){
        cout << c << " ";
        if(count_print%columns == columns-1 ){
            cout << "\n";
        }
        count_print++;
    }


    return 0;
}