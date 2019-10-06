//Ebony Warren
//CS 52
//Assignment #2
//Problem 2

#include <iostream>
using namespace std;

void tri(int size){
    cout << "Triangle: \n";
    for(int i = 0; i < size; i++){
        for (int x=0; x<=i; x++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    
    int size;
    cout << "Enter size: ";
    cin >> size;
    tri(size);
    return 0;
}
