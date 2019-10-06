//Ebony Warren
//CS 52
//Assignment #2
//Problem 3

#include <iostream>
using namespace std;

bool isFibonacci(int number){
    int t1 = 0, t2 = 1, nextTerm = 0;
    while (nextTerm <= number){
        
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        if (number == nextTerm || number == 0){
        
        return true;
        };
    }
    return false;
}

int main(){
    int fib=0;
    
    while (fib != -1){
    cout << "Input: ";
    cin >> fib;
    if (fib < 0){
        if (fib == -1){
            cout << "Goodbye!\n";
            exit(0);
        }
        else
            cout << "invalid answer\n\n";
            cout << "Input: ";
            cin >> fib;
            }
    cout << "Output: ";
    
    if (isFibonacci(fib)){
        cout << fib << " is a Fibonacci number \n\n";
    }
    else
        cout << fib << " is not a Fibonacci number \n\n";
    }
    
    return 0;
}
