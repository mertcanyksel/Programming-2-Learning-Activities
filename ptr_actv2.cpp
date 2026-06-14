#include <iostream>
using namespace std;

int main(){
    int array[] = {1,6,7,16};
    int size = sizeof(array) / sizeof(array[0]);
    
    int* array_ptr =array;
    
    for(int i=0; i < size ; i++){
        cout << "Value of "<< i+1 <<": "<< array_ptr[i] << "\n" << "Address is : "<<&array_ptr[i] <<endl;
    }
}
