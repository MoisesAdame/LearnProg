#include <iostream>
#include <vector>
using namespace std;
//Insertion Sort
vector<int> insertion_sort(vector<int> &v, int element){
    vector<int> timer = v;
    for(auto beg = v.begin(); beg != v.end(); ++beg){
        if(element >= *beg && element <= *(beg+1) ){
            timer.push_back(element);
            timer.push_back(*beg);
        }
        else{
            timer.push_back(*beg);
        }
    }
    return timer;
}

void insertion_sort(int arr[], int size){
    int i, j, key;
    for(int i = 1; i<size; ++i){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j -= 1;
            arr[j+1] = key;
        }
    }
}





int main (){
    int arr[] = {12, 11, 13, 5, 6};
    insertion_sort(arr, end(arr)-begin(arr));
    for(auto &c : arr){
        cout << c << endl;
    }

    return 0;
}



