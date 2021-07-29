#include <iostream>
using namespace std;
int main (){
    //When using void, after the last line there is a return
    //Is analogus to a break
    decltype long hotdog;
    cout << sizeof(long) << "\n"
         << sizeof(hotdog) << endl;
    return 0;
}