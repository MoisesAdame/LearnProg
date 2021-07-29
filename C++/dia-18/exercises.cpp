/*
link: https://edabit.com/challenge/wgnmQTbfssuhvZHqe
*/

#include <iostream>
using namespace std;

int sum(initializer_list<int> ls){
    int sum = 0;
    for(auto &e : ls){
        sum += e;
    }
    return sum;
}
int addition(int n){
    return (n+1);
}
int convert(int minutes){
    return (minutes*60);
}
float triArea(float base, float height){
    return ((base*height)/2);
}

void tweakLetters(string &s, int* beg, int* end){
    while(beg != end){
        for(auto &c : s){
            if((*beg) == 0){
                ++beg;
                continue;
            }
            else if((*beg) != 0){
                int size = c + (*beg);
                char sizec = size;
                c = sizec;
            }
            ++beg;
        }
    }
}

