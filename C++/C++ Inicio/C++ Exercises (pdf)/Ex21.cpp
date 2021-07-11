//Prime Number Detecting Function
#include <iostream>
using namespace std;

void prime_1(long long x){
    long long counter = 0;
    for(long long i=(x-1); i>1; i--){
        if(x%i != 0){
            counter++;
        }
    }
    if(counter == x-2){
        cout << "Prime.\n";
    }
    else{
        cout << "Not Prime.\n";
    }
}



int main () {
    prime_1(87178291199); 
    cout << "\n";
    cout << clock();
    return 0;
}