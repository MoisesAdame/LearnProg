//Conversor Imperial and Metric System
//UI for choosing type of measurment
#include <iostream>
using namespace std;
int main () {
    cout << "CHOOSE A TYPE OF CONVERSION:\n";
    cout << "1: Length\t" << "2: Mass\t" << "3: Temperature\n";
    float selection_1, selection_2, quantity;
    cout << "Option: ";
    cin >> selection_1;
    if (selection_1 == 1){
        cout << "CHOOSE AN OPTION:\n";
        cout << "1: in > cm\t" << "2: cm > in\t" << "3: ft > m\t" <<"4: m > ft\n";
        cout << "5: yd > m\t" << "6: m > yd\t" << "7: mile > km\t" << "8:km > mile\n";
        cout << "Option: ";
        cin >> selection_2;
        if(selection_2 == 1){
            cout << "Enter Quantity: ";
            cin >> quantity;
            float cm = quantity * 2.54;
            cout << quantity <<" in = " << cm <<" cm\n";
        }
        else if (selection_2 == 2){
            cout << "Enter Quantity: ";
            cin >> quantity;
            float in = quantity / 2.54;
            cout << quantity <<" cm = " << in <<" in\n";
        }
        else if (selection_2 == 3){
            cout << "Enter Quantity: ";
            cin >> quantity;
            float m = quantity * 0.3048;
            cout << quantity <<" ft = " << m <<" m\n";
        }
        else if (selection_2 == 4){
            cout << "Enter Quantity: ";
            cin >> quantity;
            float ft = quantity / 0.3048;
            cout << quantity <<" m = " << ft <<" ft\n";
        }
        else if (selection_2 == 5){
            cout << "Enter Quantity: ";
            cin >> quantity;
            float m = quantity * 0.9144;
            cout << quantity <<" yd = " << m <<" m\n";
        }
        else if (selection_2 == 6){
            cout << "Enter Quantity: ";
            cin >> quantity;
            float yd = quantity / 0.9144;
            cout << quantity <<" m = " << yd <<" yd\n";
        }
        else if (selection_2 == 7){
            cout << "Enter Quantity: ";
            cin >> quantity;
            float km = quantity * 1.609344;
            cout << quantity <<" miles = " << km <<" km\n";
        }
        else if (selection_2 == 8){
            cout << "Enter Quantity: ";
            cin >> quantity;
            float mile = quantity / 1.609344;
            cout << quantity <<" km = " << mile <<" miles\n";
        }
        else{
            cout << "Select a correct option.\n";
            return -1;
        }
    }
    else if (selection_1 == 2){
        cout << "CHOOSE AN OPTION:\n";
        cout << "1: oz > g\t" << "2: g > oz\t" << "3: lb > kg\t" <<"4: kg > lb\n";
        cout << "Option: ";
        cin >> selection_2;
        if (selection_2 == 1){
            cout << "Enter Quantity: ";
            cin >> quantity;
            float g = quantity * 28.34952;
            cout << quantity <<" oz = " << g <<" g\n";
        }
        else if (selection_2 == 2){
            cout << "Enter Quantity: ";
            cin >> quantity;
            float oz = quantity / 28.34952;
            cout << quantity <<" g = " << oz <<" oz\n";
        }
        else if (selection_2 == 3){
            cout << "Enter Quantity: ";
            cin >> quantity;
            float kg = quantity * 0.4535924;
            cout << quantity <<" lb = " << kg <<" kg\n";
        }
        else if (selection_2 == 4){
            cout << "Enter Quantity: ";
            cin >> quantity;
            float lb = quantity / 0.4535924;
            cout << quantity <<" kg = " << lb <<" lb\n";
        }
        else{
            cout << "Select a correct option.\n";
            return -1;
        }
    }
    else if (selection_1 == 3){
        cout << "CHOOSE AN OPTION:\n";
        cout << "1: ºF > ºC\t" << "2: ºC > ºF\n";
        cout << "Option: ";
        cin >> selection_2;
        if (selection_2 == 1){
            cout << "Enter Quantity: ";
            cin >> quantity;
            float c = (5*(quantity-32))/(9);
            cout << quantity <<" ºF = " << c <<" ºC\n";
        }
        else if (selection_2 == 2){
            cout << "Enter Quantity: ";
            cin >> quantity;
            float f = ((9*quantity)/(5))+32;
            cout << quantity <<" ºC = " << f <<" ºF\n";
        }
        else {
            cout << "Select a correct option.\n";
            return -1;
        }
    }
    else{
        cout << "Select a correct option.\n";
        return -1;
    }
    return 0;
}