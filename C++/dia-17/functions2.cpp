#include <iostream>
using namespace std;

void var_swap(int* p1, int* p2){
    int deck = *p1;
    *p1 = *p2;
    p1 = 0;
    *p2 = deck;
    p2 = 0;
}

bool isShorter(const string &s1,const string &s2){
    return s1.size() < s2.size();
}

int find_char(const string &s, char c, size_t &occurs){
    int count = 0;
    occurs = 0;
    for(auto k:s){
        ++count;
        if(k == c){
            ++occurs;
            if(occurs == 1){
                return count;
            }
        }
    }
}
void reset(int* r){
    *r = 0;
    r = 0;
}




bool emp(const string &s){
    return (s.empty());
}


int main () {
    int a = 123, b = 15;
    //Pointers as functions parameters
    var_swap(&a, &b);
    //Using refrence in parameter to avoid copying the whole string
    string str1("Hola Amigo"), str2("Moy es un Conejo");
    //Using another variable in the parameter, to return more than one output.
    size_t times_o;
    find_char(str2, 'o', times_o);

    reset(&a);

    //Arrays as parameters
    int arr[10] = {0,1,2,3,4,5,4,3,2,4};

   for(auto j : str2){
       j = tolower(j);
    }
   cout << str2 << endl;




    

    







    return 0;
}