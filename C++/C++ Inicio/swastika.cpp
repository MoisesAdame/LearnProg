#include <iostream>
using namespace std;

void swastika(int width){
    for(int i=0; i<width; i++){
        if(i==0){
            cout<<"*";
            for(int i=0; i<(width-2); i++){
                cout<<" ";
            }
            for(int i=0; i<width; i++){
                cout<<"*";
            }
            cout<<"\n";
        }
        else{
            cout<<"*";
            for(int i=0; i<(width-2); i++){
                cout<<" ";
            }
            cout<<"*\n";
        }

    }
    for(int i=0; i<(2*width -1); i++){
        cout<<"*";
    }
    cout<<"\n";
    for(int i=0; i<width; i++){
        if(i==(width-1)){
            for(int i=0; i<width; i++){
                cout<<"*";
            }
            for(int i=0; i<(width-2); i++){
                cout<<" ";
            }
            cout<<"*";
        }
        else {
            for(int i=0; i<(width -1); i++){
                cout<<" ";
            }
            cout<<"*";
            for(int i=0; i<(width-2); i++){
                cout<<" ";
            }
            cout<<"*\n";

        }
    }

}

int main (){
    int rows;
    cout << "Rows?\n";
    cin>>rows;
    swastika(rows);
    return 0;
}
