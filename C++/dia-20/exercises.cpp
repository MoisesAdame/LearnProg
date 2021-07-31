#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int cars(int wheels, int bodies, int figures){
    int full_wheels = wheels/4;
    int full_bodies = bodies;
    int full_figrs  = figures/2;
    return min(min(full_wheels, full_bodies), min(full_wheels, full_figrs));
}

void evenOddTransform(int* beg, int* end, int num){
    while(beg != end){
        if((*beg)%2 == 0){
            (*beg) += (-2*num);
        }
        else{
            (*beg) += (2*num);
        }
        ++beg;
    }
}

void accumulatingArray(int* beg, int* end){
    int sum = 0;
    while(beg != end){
        (*beg) += sum;
        sum = (*beg);
        ++beg;
    }
    return;
}

int doubledPay(int day){
    return pow(2, day) -1;
}

bool rectangleInCircle(float width, float height, float radius){
    float x = width/2;
    float y = height/2;
    if(sqrt(radius*radius - x*x) < y){
        return false;
    }
    else{
        return true;
    }
}

bool isBoiling(float temp, char sys){
    if((sys == 'C' && temp >= 100) || (sys == 'F' && temp >= 212)){
        return true;
    }
    else{
        return false;
    }
}

string reverseAndNot(string str){
    string new_str("",(2*(str.size())));
    int count = 0;
    for(int index = str.size()-1; index>=0; --index){
        new_str[count] =  str[index];
        ++count;
    }
    for(auto &c : str){
        new_str[count] = c;
        ++count;
    }
    return new_str;
}

string reverse(string str){
    string new_string("", str.size());
    size_t count = 0;
    if(str.size() == 1){
        return str;
    }
    else{
        for(size_t index = str.size()-1; index > -1; --index){
            new_string[count] = str[index];
        }
        return new_string;
    }
}

vector<int> miniPeaks(initializer_list<int> v){
    vector<int> ret_v;
    auto end = v.end()-2;
    if(v.size() < 2){
        return {};
    }
    else{
        for(auto beg = v.begin()+1; beg < end; ++beg){
            if(*beg > *(beg-1) && *beg > *(beg+1)){
                ret_v.push_back(*beg);
            }
            else{
                continue;
            }
        }
        return ret_v;
    }
}











int main (){
    vector<int> ret_v = miniPeaks({4, 5, 2, 1, 4, 9, 7, 2});
    for(auto &e : ret_v){
        cout << e << " ";
    }

    return 0;
}