#include <iostream>
#include <string>
using namespace std;
int main(){
    //String Initialization
    string s1 = "Moy";
    string s2(s1);
    string s3("Adame");
    string s4(5,'a'); //Tiene que se como Char

    //String operations
    string s5 = "Lorem Impusum";
    bool empty = s5.empty();    //Como s5 esta lleno, empty = false
    auto size = s5.size();    //Regresa la cant. de letras de s5 que es 13.
    char L = s5[0];             //Nos da L

    //String Comparisson
    bool b1 = ("Hola" < "Hola Mundo");
    bool b2 = ("Hola" < "Hole");

    //Analizar y/o Modificar strings usando for loop (Introducido en c++11)
    string s6("1Moy Adame Aguilar");
    int space_cntr = 0;
    for(auto a:s6){
        if(isspace(a)){
            space_cntr++;
        }
    }
    cout << "The sentence: " << s6 <<" has " <<space_cntr <<" spaces." <<"\n";
    cout << isalnum(s6[0]) << "\n";
    
    //Usando References (&)
    string s7("mayusculas");
    for(auto &a:s7){
        a = toupper(a);
    }
    cout << s7 <<"\n";
    

    string s8("Moises Adame");
    for(auto &x:s8){
        x = 'X';
    }
    cout << s8 <<"\n";

    string s9("Hola!!!");
    int punct_cnt = 0;
    for(auto c:s9){
        
    }
    cout << punct_cnt <<"\n";




    return 0;
}