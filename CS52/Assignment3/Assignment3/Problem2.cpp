////Ebony Warren
////CS 52
////Assignment #3
////Problem 2
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//typedef int* IntPtr;
//
//int main(){
//    
//    int size;
//    bool negSize = true;
//    do{
//        cout << "Enter a size: ";
//        cin >> size;
//        if (size < 1){
//            negSize = true;
//        }
//        else
//            negSize = false;
//    }while (negSize);
//    
//    IntPtr array = new int[size];
//    
//    for (int i = 0; i < size; i++){
//        cout << "Item " << i + 1 << ": ";
//        cin >> array[i];
//    }
//        for(int i = 0; i < size; i++){
//            for(int k = i + 1; k < size; k++){
//                if(array[k] < array[i]){
//                    int tmp = array[i];
//                    array[i] = array[k];
//                    array[k] = tmp;
//                    
//                }
//                
//            }
//            
//        }
//    cout << "Sortting: ";
//        for(int i = 0; i < size; i++){
//            cout << array[i] << ", ";
//        }
//    
//    return 0;
//}
