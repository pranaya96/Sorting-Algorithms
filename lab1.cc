//Bubblesort implementation using string array
#include <iostream>
#include <string>
using namespace std;
 
template <typename T>
void bubbleSort(T array[], int len);

int main()
{
  //initializing string array
  string  array[] = { "Alice", "Bob", "John", "Doe","Aaron", "Sam"};
  int len = 6;
  bubbleSort(array, len);
  return 0;
}


template <typename T>
void bubbleSort( T array[], int len){
    
    for(int i=0; i < len; i++){
        for(int j= len-1; j > i; j--){
            if (array[j] < array[j-1]){
                T temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }   
        }
    }
    
    for(int i=0; i<6  ; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    
    
}