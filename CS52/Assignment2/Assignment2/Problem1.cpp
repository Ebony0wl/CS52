//Ebony Warren
//CS 52
//Assignment #2
//Problem 1

#include <iostream>
using namespace std;

void candles(int candleSize, int wickSize){
    
    for(int i = 0; i < candleSize; i++){
        cout<< "=";
    }
    for(int i = 0; i < wickSize; i++){
        cout<< "-";
    }
    cout<< endl;
    
}

int main(){
    
    int candle, wick;
    cout << "Candle size: ";
    cin >> candle;
    cout << "Wick size: ";
    cin >> wick;
    cout << "Output: ";
    candles(candle,wick);
    return 0;
}
