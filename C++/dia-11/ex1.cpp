#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
//Not including print, just logic.
//Link: https://www.java67.com/2018/06/data-structure-and-algorithm-interview-questions-programmers.html?m=1
//For exercise: Find all permutations of String?
int permutations(size_t x){
    int prod = 1;
    for(int i = x ; i>1; i--){
        prod = prod * i;
    }
    return prod;
} 

int main () {
    //Print duplicate characters from String?
    string s1("lacubouanao");
    vector<char> v1;
    for(auto &c : s1){
        for(auto &b : s1){
            if(c == b && &b != &c){
                v1.push_back(c);
            }
        }
    }

    //Check if two Strings are anagrams of each other?
    string s2("roma");
    string s3("amor");
    int counter1 = 0;
    bool switch1;
    for(auto &a : s2){
        for(auto &b : s3){
            if(a == b){
                ++counter1;
            }
            else if(s3.size() == s2.size() && counter1 == s2.size()){
                switch1 = true;
            }
            else {
                switch1 = false;
            }
        }
    }
    
    //Print first non repeated character from String?
    string s4("laplace");
    string c1;
    int counter_2;
    for(auto &a : s4){
        counter_2 = 0;
        for(auto &b : s4){
            if(a == b){
                ++counter_2;
            }
        }
        if(counter_2 <= 1){
            c1 = a;
            break;
        }
    }
    
    //Reverse a given String using recursion?
    string s5("Hola Mundo");
    for(int i=s5.size()-1; i>=0 ; --i){
        cout << s5[i];
    }
    cout << endl;

    //Check if a String contains only digits?
    string s6("1234a51");
    int counter3 = 0;
    for(auto &a : s6){
        if(isdigit(a)){
            ++counter3;
        }
    }
    if(counter3 == s6.size()){
        cout << "This string contains only digits" << endl;
    }
    else {
        cout << "This string does not contain only digits" << endl;
    }

    //Count a number of vowels and consonants in a given String?
    string s7("ana");
    string vocales("aeiou");
    int cont_vocales = 0;
    for(auto &a : s7){
        for(auto &b : vocales){
            if(a == b){
                ++cont_vocales;
            }
        }
    }
    int consonantes = s7.size() - cont_vocales;
    cout << "Esta palabra tiene: " << cont_vocales << " vocales y " << consonantes << " consonantes\n";

    //Count the occurrence of a given character in String?
    char letra_obj = 'a';
    string s8("gasolina");
    int cont4 = 0;
    for(auto &a : s8){
        if(letra_obj == a){
            ++cont4;
        }
    }
    cout << "La letra \"" << letra_obj << "\" ocurre " << cont4 << " veces." << endl;

    //Find all permutations of String?
    size_t s8_size = s8.size();
    permutations(s8_size);

    //Reverse words in a given sentence without using any library method?
    string s9("Moy es un conejo");
    vector<char> v2;

    return 0;
}