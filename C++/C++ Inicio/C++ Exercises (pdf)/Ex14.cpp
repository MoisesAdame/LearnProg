#include <iostream>
using namespace std;
int main () {
    //User Input (Number of Rows and Columns)
    int rows, columns;
    cout << "Matrix rows: ";
    cin >> rows;
    cout << "Matrix columns: ";
    cin >> columns;
    cout << "\n";

    //Defining the matrices, their sum and difference(dif)
    int a[columns][rows], b[columns][rows];
    int sum[columns][rows], dif[columns][rows], mul[columns][rows];
    
    //User Input (Value in each place)
    cout << "MATRIX A:\n";
    for (int i=0; i<columns; i++){
        for (int j=0; j<rows; j++){
            int value;
            cout << "A" <<i+1 <<j+1 <<":";
            cin >> value;
            a[i][j] = value;
        }
    }
    cout << "MATRIX B:\n";
    for (int i=0; i<columns; i++){
        for (int j=0; j<rows; j++){
            int value;
            cout << "B" <<i+1 <<j+1 <<":";
            cin >> value;
            b[i][j] = value;
        }
    }
    
    //Sum and Difference of the Matrices
    for (int i=0; i<columns; i++){
        for (int j=0; j<rows; j++){
            sum[i][j] = a[i][j] + b[i][j];
            dif[i][j] = a[i][j] - b[i][j];
        }
    }

    //Printing the Matrix Sum and Dif with UI
    cout << "Sum =\n";
    for (int i=0; i<columns; i++){
        for (int j=0; j<rows; j++){
            cout << sum[i][j];
            if (j%rows != rows-1){
                cout << " ";
            }
            else if(j%rows == rows-1){
                cout << "\n\n";
            }
        }
    }
    cout << "\n";
    cout << "Dif =\n";
    for (int i=0; i<columns; i++){
        for (int j=0; j<rows; j++){
            cout << dif[i][j];
            if (j%rows != rows-1){
                cout << " ";
            }
            else if(j%rows == rows-1){
                cout << "\n\n";
            }
        }
    }
    return 0;
}