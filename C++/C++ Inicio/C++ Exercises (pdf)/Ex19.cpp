//Date Arithmetic (dd/mm/yyyy)
/*
****2020
2021
2022
2023
****2024
2025
2026
2027
****2028


*/
#include <iostream>
using namespace std;
int main () {
    int init_day[3] ={4,1,2003};
    int end_day[3] ={6,7,2021}; 

    //Months
    int mont_day_lib_1[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int mont_day_lib_2[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    for (int i=1990; i<2051; i++){
        cout << i<<": "<<i%4 <<"\n";
    }





    return 0;
}