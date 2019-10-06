//Ebony Warren
//CS 52
//Assignment #4
//Problem 1

#include <iostream>
#include <string>

using namespace std;

int recursive(unsigned int n){
    if (n/3 > 0){
        return n *= recursive(n/3);
    }
    else return n;
        
};

int main(){
    
    int num;
    bool TF = true;
    do{
        cout << "Input: ";
        cin >> num;
        if (num <= 0){
            cout << "Please Enter a positive number\n";
            TF = true;}
        else TF = false;
        
    }while(TF);
    
    cout << "Result: " << recursive(num) << endl;
    
}
