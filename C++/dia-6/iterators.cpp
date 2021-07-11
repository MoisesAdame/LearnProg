/*
Lo más importante de los iterators es que son un análogo de los pointers;
lo que cambia, es que no los podemos imprimir a menos que hagamos *iter
lo cual, nos daría el objeto que estan referenciando.
*/

#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<int> v{1,2,3,4,5};

    //Calling the iterators
    auto v_1st = v.begin();
    auto v_last = v.end();

    //Operations for Iterators
    //Next element
    v_1st++;
    int a = *v_1st;
    //Previous element
    v_last--;
    int b = *v_last;

    //Iteratos in the for loop
    string s("hola moy");
    for(auto it=s.begin(); it!=s.end(); it++){
        *it = toupper(*it);
        
    }

    vector<string> v2{"moy", "es","un", "conejo"};
    auto it_v2 = v2.begin();
    bool lleno_ok = (*it_v2).empty();          //No genera error
    //bool lleno_nok = *it_v2.empty();         //Genera ERROR pq it_v2 no esta / ()
    bool lleno_ok_ok = it_v2 ->empty();        //Hacemos lo mismo pero con el operador ->

    vector<int> v3(10,20);
    for(auto it = v3.begin(); it != v3.cend(); it++){
        *it = (*it)*2;
    }
    return 0;
}