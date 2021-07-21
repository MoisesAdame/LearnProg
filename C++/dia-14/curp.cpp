#include <iostream>
#include <vector>
using namespace std;
int main (){
    string completo, nombre, apellido1, apellido2;
    int año, mes, dia, sexo, nacimiento;
    vector<char> curp1;
    vector<int> curp2;
    vector<char> curp3;
    int spaces = 0;
    cout << "Nombre (sin acentos): ";
    getline(cin, completo);
    for(auto &c : completo){
        if(isspace(c)){
            ++spaces;
        }
        else if(spaces == 0){
            nombre += toupper(c);
        }
        else if(spaces == 1){
            apellido1 += toupper(c);
        }
        else if(spaces == 2){
            apellido2 += toupper(c);
        }
    }
    cout << "Año de nacimiento: ";
    cin  >> año;
    cout << "Mes de nacimiento (número): ";
    cin  >> mes;
    cout << "Día de nacimiento (número): ";
    cin  >> dia;
    cout << "Sexo: (1)Hombre (2)Mujer.";
    cin  >> nacimiento;
    if(sexo == 1){
        curp3.push_back('H')
    }
    else if(sexo == 2){
        curp3.push_back('M')
    }
    cout << "Sexo: (1)Hombre (2)Mujer.";
    cin  >> sexo;


    curp1.push_back(apellido1[0]);
    curp1.push_back(apellido1[2]);
    curp1.push_back(apellido2[0]);
    curp1.push_back(nombre[0]);

    if(año%100 < 10){
        curp2.push_back(0);
        curp2.push_back(año%100);
    }
    else if(año%100 >= 10){
        curp2.push_back(año%100);
    }
    if(mes < 10){
        curp2.push_back(0);
        curp2.push_back(mes);
    }
    else if(mes > 9 ){
        curp2.push_back(mes);
    }
    if(dia < 10){
        curp2.push_back(0);
        curp2.push_back(dia);
    }
    else if(dia > 9 ){
        curp2.push_back(dia);
    }

    



    for(auto &c : curp1){
        cout << c;
    }

    for(auto &c : curp2){
        cout << c;
    }


    return 0;
}