#include <iostream>
#include <vector>
using namespace std;

const string& shorterStr(const string &s1, const string &s2){
    return ((s1.size() <= s2.size()) ? s1 : s2);
}
//Returning vectors
vector<string> nombre(int x){
    if(x == 1){
        return {"Moises"};
    }
    else if(x == 2){
        return {"Moises", "Adame"};
    }
    else if(x == 3){
        return {"Moises", "Adame", "Aguilar"};
    }
    else{
        return {};
    }
}

int Fact(int x){
    int prod = 1;
    int val = x;
    while(val > 1){
        prod *= val--;
    }
    return prod;
}

int reFact(int x){
    while(x > 1){
        return x * reFact(x - 1);
    }
    return 1;
}

int vect(const vector<int> v){
    auto beg = v.begin();
    while(beg != v.end()){
        cout << *beg++ << " ";
    }
    cout << endl;
    return 1;
}

//Static Type is a good ally for recursion

void reVect(const vector<int> v){
    int index = v.size();
    static int i = 0;
    cout << v[i] << " ";
    while(i < index-1){
        ++i;
        reVect(v);
    }
}


int main () {
    string s1("Moy"), s2("Moy Adame");
    vector<int> v1{1,2,3,4,5};
    reVect(v1);

    return 0;
}