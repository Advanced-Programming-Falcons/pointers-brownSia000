#include <iostream>

using namespace std;

int main(void){
    int input;
    cout << "Type array compacity: ";
    cin >> input;
    int* array = new int [input];
    cout << "Original array: "; 
    for (int i=0; i < input; i++){
        array[i] = i + i;
        cout << array[i] << " ";
    }
    cout << endl << "Modefided array(+5): "; 
   for (int i=0; i < input; i++){
        array[i] = array[i] + 5;
        cout << array[i] << " ";
    }
    int temp = 0;
    int* temp_array = array;
    cout << endl << "Shifted array: "; 
    for(int i=input -1; i > 0; i--){
        array[i] = array[i-1];
        cout << array[i] << " ";
    }

    delete[] array;
    return 0;

}