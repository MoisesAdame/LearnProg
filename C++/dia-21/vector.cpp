#include <iostream>
#include <cmath>
using namespace std;

class Point{
    public:
        float x = 0;
        float y = 0;
        float z = 0;
};

class Vector{
    public:
        string name = "v";
        Point start;
        Point end;
};

void print(Vector v){
    cout << "(" << v.start.x << ", " << v.start.y << ", " << v.start.z
         <<") --> (" << v.end.x << ", " << v.end.y << ", " << v.end.z << ")"<< endl;
}
float magnitude(Vector v){
    float mag = sqrt((v.start.x - v.end.x)*(v.start.x - v.end.x) + (v.start.y - v.end.y)*(v.start.y - v.end.y) + (v.start.z - v.end.z)*(v.start.z - v.end.z));
    
    return mag;
}

float dotproduct(Vector v1, Vector v2){
    float dotp = (v1.start.x - v1.end.x)*(v2.start.x - v2.end.x) + (v1.start.y - v1.end.y)*(v2.start.y - v2.end.y) + (v1.start.z - v1.end.z)*(v2.start.z - v2.end.z);

    return dotp;
}

Vector crossproduct(Vector v1, Vector v2, string name = "vcross"){
    Vector v_new;
    v_new.name = name;
    v_new.end.x =  ((v1.start.y - v1.end.y)*(v2.start.z - v2.end.z) - (v1.start.z - v1.end.z)*(v2.start.y - v2.end.y));
    v_new.end.x = (v_new.end.x >= 0 ? abs(v_new.end.x) : v_new.end.x);
    v_new.end.y = -((v1.start.x - v1.end.x)*(v2.start.z - v2.end.z) - (v1.start.z - v1.end.z)*(v2.start.x - v2.end.x));
    v_new.end.y = (v_new.end.y >= 0 ? abs(v_new.end.y) : v_new.end.y);
    v_new.end.z =  ((v1.start.x - v1.end.x)*(v2.start.y - v2.end.y) - (v1.start.y - v1.end.y)*(v2.start.x - v2.end.x));
    v_new.end.z = (v_new.end.z >= 0 ? abs(v_new.end.z) : v_new.end.z);
    
    return v_new;
}

