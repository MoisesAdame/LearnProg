/*
Link: https://edabit.com/challenge/MYqnQ3DpPZi9di4iW
*/

#include <iostream>
#include <cmath>
using namespace std;

float quadraticEquation(float a, float b, float c){
    if((b*b -4*a*c) > 0){
        return ((-b + sqrt(b*b -4*a*c))/(2*a));
    }
    else{
        cerr << "Imaginary Roots\n";
        return -1;
    }
    return 0;
}

string doubleSwap(string &s, char c1, char c2){
    for(auto &k : s){
        if(k == c1){
            k = c2;
        }
        else if(k == c2){
            k = c1;
        }
        else{
            k = k;
        }
    }
    return s;
}

string uncen(string word, string vowels){
    int index = 0;
    for(auto &w : word){
        if(w == '*'){
            w = vowels[index];
            ++index;
        }
    }
    return word;
}

void rps(string P1, string P2){
    cout << (P1 == P2 ? "Tie\n" : (P1 == "rock" && P2 == "paper" ? "P2 Wins\n" : ()));
}





int main (){
    string s = "128 895 556 788 999";

    rps("paper", "scissors");

    return 0;
}
