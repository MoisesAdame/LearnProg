#include <iostream>
#include <string>
using namespace std;
int main () {
    //Conversiones Explícitas
    //A veces es necesario cambiar el T de un object como por ejemplo:
    int i=3, j = 2;
    float slope = i/j;         //Al ser i y j ints se trunca y el resultado es un entero

    //Named Casts
    //Hay diferentes tipos de casts, pero el que uses define el tipo de
    //modificación que se hará.
    //Forma general: cast-name<T>(expr);

    //static_cast
    //Si asignamos un type grande a uno pequeño i.e. float a int va a haber 
    //Warning pq se perdería precisión (al tuncar el float).
    //Si usamos un cats la warning se desactiva.
    float a = 6.5678, b = 3.5328;
    int c1 = a/b;                    //a/b = 1.85 al truncarse = 1
    int c2 = static_cast<int>(a)/static_cast<int>(b);//a se trunca a 6 y b a 3 por lo tanto es 2
    
    double d = 3.14159;
    void* p = &d;               //Cualquier valor no constante, su ptr puede ser void*.
    double* dp = static_cast<double*>(p); //Pasamos de void* -> double* (SIN CAMBIAR EL POINTER)
    
    //const_cast
    const string s("vanilla");
    const string *const cps = &s;           //Aquí decimos que cps es un ptr const (No modificable)
    string* ps = const_cast<string*>(cps);  //Aquí logramos que sea ptr pero no const

    return 0;
}