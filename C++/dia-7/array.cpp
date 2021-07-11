#include <iostream>
#include <vector>
using namespace std;
int main () {
    /*ARRAYS
      Son containers, pero menos dinámicos que los vectors; su dimension, puede ser establecida de forma
      explícita o implícita, pero, si se hace de de forma implícita, la dimensión debe ser const. Además,
      los arrays pueden contener basicamente todo tipo de objects, exceptuando referencias (no confundir
      con pointers).
    */

    // Para evitar ERROR inicializar con const.
    const unsigned a = 3;
    int arr1[a];

    // Iniciación Explícita
    int arr2[] = {1,2,3};                  //Dimention = 3
    int arr3[5] = {1,2,3};                 //Dimention = 5, {1,2,3,0,0}
    string arr4[3] = {"moy", "conejo"};    //Dimention = 3, {"moy", "conejo",""}

    //Char Arrays
    //Son diferentes pq además de inicializarlos de la forma tradicional,
    //lo podemos hacer igualándolos a una string.
    char char_arr1[] = {'C', '+', '+'};          //Dimention = 3
    char char_arr2[] = {'C', '+', '+', '\0'};    //Dimention = 4, null(\0) agregado de forma explicita.
    char char_arr3[] = "C++";                    //Dimention = 4, null(\0) agregado de forma implícita.
    
    //Es más preciso usar el type size_t para todo lo que vaya en el []
    const int size_10 = 10;
    int arr5[10];
    for(size_t i = 0; i<size_10; i++){
        arr5[i] = i;
    }

    //Arrays & Pointers
    //Pointes ARE iterators.
    //Todo lo que hacíamos con iterators es posible con pointers.
    string nums[] = {"one", "two", "three"};
    string* p = &nums[0];   //Esto
    string* p2 = nums;      //Y esto son expresiones equivalentes
    //La implicación de esto es lo siguiente
    auto nums2(nums);       //Al copiar el array a "otro" con auto, el type es string*.

    //.begin() y .end() en arrays
    //Podríamos usar pointers para hacer lo mismo, pero puede generar error.
    auto beg_nums = begin(nums), end_nums = end(nums);   //Esto
    string* beg_nums_ptr = nums;
    string* end_nums_ptr = &nums[3];                     //Y esto son lo mismo.

    //Manipulaciones de arrays con pointers.
    int arr7[] = {1,2,3,4,5,6,7,8,9};
    int* point = &arr7[5];       //Es como si point fuera un super-array el cual empieza en 6 o arr7[5] 
    int i = point[0];            //Equivalente a i = arr7[5];
    int j = point[-2];           //Equivalente a i = arr7[3];

    //Inicializar Vector mediante Array
    //Hay 2 formas; una con begin() y end() 
    //Y otra con arr, arr+n
    //Para evitar errores, es preferible usar la primera.
    string arr8[] = {"Moy", "es", "un", "conejo"};
    vector<string> arr8_to_vec(begin(arr8), end(arr8));  //Primera forma
    vector<string> arr8_to_vec_2(arr8, arr8+3);
    auto conejo = arr8_to_vec.begin() +2;
    
    return 0;
}