/*Diamond*/
#include <iostream>
using namespace std;

void diamond(int biglarge){
    int halfbiglarge = biglarge/2;
    for(int i=0; i<halfbiglarge; i++){
        for(int j=halfbiglarge-i; j>(0); j--){
            cout<<" ";
        }
        for(int k=0; k<(2*i +1); k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int l=0; l<biglarge; l++){
            cout<<"*";
        }
    cout<<"\n";
    
    for(int i=halfbiglarge; i>0; i--){
        for(int m=0; m<(halfbiglarge-i+1); m++){
            cout<<" ";
        }
        for(int n=(2*(i-1) +1); n>0; n--){
            cout<<"*";
        }
        cout<<"\n";
    }
  
}

int main (){
    int value;
    cout << "Size: ";
    cin >> value;
    diamond(value);
    return 0;
}