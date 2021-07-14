#include <iostream>
#include <vector>
using namespace std;
int main (){
    int i;
    double j;
    i = j = 3.5;  //First, j is assigned 3.5, but then, because i is an int, 3.5 gets trncated and
                  //ends up as 3.

    if((i=42)){
        cout << "Yes\n" << i << endl;
    }
    //Increment (++) & Decrement (--) Operands
    //Se pueden poner como prefijo o como sufijo (pero causan cosas diferentes).
    int k = 0, l = 0, a,b;
    a = k++;       //Sufix: When assigned yields an UNincremented value. (a=0)
    b = ++l;       //Prefix: When assigned yields an incremented value.  (b=1)

    //Increment (++) and Dereference (*) Operands
    //Print all the numbers except 8
    vector<int> v_all{5,4,10,12,21,3,8};
    vector<int> v_except_8;
    auto count = v_all.begin();
    while(count != v_all.end() && *count != 8){
        v_except_8.push_back(*count++);        //Esto lo que hace es primero *count y luego count++
    }
    string word;
    if(cin >> word){
        auto beg = word.begin();
        while(!isspace(*beg)){
            //Esto es lo intuitivo pero caua ERROR pq (=) y (++) cambian a beg
            //*beg = toupper(*beg++);
            //Lo correcto es:
            *beg = toupper(*beg);
            ++beg;
        }
    }

    //Member Access Operators (*) y (->)
    string s("Hola Mundo"), *ptr = &s;
    size_t n1 = s.size();          //Forma tradicional
    size_t n2 = (*ptr).size();     //Usando pinters
    size_t n3 = ptr -> size();     //Usando arrow op (->)
    cout << n1 << " " <<n2 <<" " << n3 << endl;

    //Te Conditional Operator (?:)
    //Forma estándar: cond ? expr1 : expr2;
    int grade_num = 32;
    string grade_str_1 = (grade_num > 60) ? "good" : "very bad";
    cout << grade_str_1 << endl;
    //Se pueden nestear
    string grade_str_2 = (grade_num > 90) ? "excelent" : (grade_num > 60) ? "pass" : "not pass";
    cout << grade_str_2 << endl;
    //Se pueden usar en la funcion cout (MUY IMPORTANTE usar paréntesis)
    int hora = 20;
    cout << "Ya son las " << hora << " de la " << (hora>19 ? "noche\n" : (hora>12 ? "tarde\n" : "mañana\n"));

    vector<int> v_ex{1,2,3,7,5,17,37,6,9};
    vector<int> v_ex_empty;
    int odd=0;
    auto begin = v_ex.begin();
    while(begin != v_ex.end()){
        if((*begin++)%2 !=0 && (*(begin-1) > (2*odd))){
            odd = *(begin-1);
            v_ex_empty.push_back(*(begin-1));
        }
    }
    for( auto &c : v_ex_empty){
        cout << c <<endl;
    }



    return 0;
}