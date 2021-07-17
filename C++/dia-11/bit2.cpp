#include <iostream>
#include <vector>
using namespace std;

int main () {
    //Initialaizing bitwise ints
    unsigned long i1 = 1UL << 5; //Bin Form: 100000 Dec Form: 32
    unsigned long i2 = 1UL << 4; //Bin Form: 010000 Dec Form: 16
    i1 |= i2;                    //Bin Form: 110000 Dec Form: 48
    i2 &= i1;                    //Bin Form: 010000 Dec Form: 16
    char c1 = 0b01110001;
    char c2 = 0b00000000;        //Bin Form: 10000000
    unsigned long grades = 0;
    unsigned quiz1 = (1U << 27);
    grades |= quiz1;
    vector<int> v1 = {1,2,3,4,5,6};

    int x[10];
    int *p = x;
    
    //Type Conversions
    //Lo relevante es que el type más grande es el que define en que se 
    //convertirá el type más pequeño.
    int i3 = 'q' +3;
    cout << i3 << endl;
    //String con char se hace int
    string s1("Hola");    //Size: by4 -> Int size: by4
    char   c3('A');       //Size: by1 -> 
    auto co1 = s1 + c3;   //Ambos se convierten a int
    //Double e int
    double d4 = 15.3220;  //Size: by8
    int  i5 = 3;          //Size: by4
    auto co2 = d4 + i5;   //i5 se convierte en long
    //Int y double  //Size: by8
    int  i6 = 3;          //Size: by4
    double d5 = 15.3220;  //Size: by8 
    auto co3 = d5 + i6;   //i6 se convierte en long
    char c4 = 'A' +3;    //Al sumar char con int el resultado es un char A-0, B-1...
    cout << c4 << endl; 

    return 0;
}