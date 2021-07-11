#include <iostream>
#include <vector>
using namespace std;
int main () {
    //Input of Rows & Column
    int rows, columns;
    cout << "Rows: ";
    cin >> rows;
    cout << "Columns: ";
    cin >> columns;


    //Creating a Proper Sized Array (board)
    vector<string> board_game(rows*columns);
    vector<int> board_nums(rows*columns);


    //Input of Board.
    
    string value;
    for(auto &c : board_game){
        while(cin >> value){
            c = value;
            break;
        }
    }
    
    auto center = board_nums.begin();
    int center_i = 0, center_j = -1;
    for(auto &c : board_game){
        if(c == "*"){
            *center = 9;
        }
        else if(*(&c+1) == "*"){
            *center += 1;
        }
        else if(*(&c-1) == "*" && center_i%columns != 0 ){
            *center += 1;
        }
        else if(board_game[center_i%columns + center_j*columns] == "*"){
            *center += 1;
        }
        else if(board_game[center_i%columns + (center_j+2)*columns] == "*"){
            *center += 1;
        }
        else if(board_game[(center_i%columns + center_j*columns)+1 ] == "*"){
            *center += 1;
        }
        else if(board_game[(center_i%columns + center_j*columns)-1 ] == "*" ){
            *center += 1;
        }
        else if(board_game[(center_i%columns + (center_j+2)*columns)+1] == "*"){
            *center += 1;
        }
        else if(board_game[(center_i%columns + (center_j+2)*columns)-1] == "*"){
            *center += 1;
        }


        center++;
        center_i++;
        if(center_i%columns == columns-1){
            center_j += 1;
        }
    }


    for(int i=0; i<(board_nums.size()); i++){
        cout << board_nums[i] <<" ";
        if(i%columns == columns-1){
            cout << "\n";
        }
    }

    return 0;
}