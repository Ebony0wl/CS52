//Ebony Warren
//CS 52
//Assignment #4
//Problem 3

//Write a program that draws a plus sign using the letter X in a size entered by a user. The size must always be an odd number. If the user enters an even number, it should be the next higher odd number.

#include <iostream>
#include <string>

using namespace std;

int main(){
    int input;
    int mid;
    int vertical=1;
    cout << "Input: ";
    cin >> input;
    
    mid = input/2;
    
    
    if(input%2 != 0){
        while(vertical<=input){
        
                if (vertical == mid+1){
                    for (int i = 0; i<input; i++ ){
                        cout << "X";
                    }
                    cout << endl;
                }
                else {
                    for (int i = 0; i<mid; i++ ){
                        cout << " ";
                    }
                    cout << "X";
                    for (int i = 0; i<mid; i++ ){
                        cout << " ";
                    }
                    cout<< endl;
                }
            
            vertical++;
        }
    }else{
            while(vertical<=input+1){
                if (vertical == mid+1){
                    for (int i = 0; i<input+1; i++ ){
                        cout << "X";
                    }
                    cout << endl;
                }
                else {
                    for (int i = 0; i<mid; i++ ){
                        cout << " ";
                    }
                    
                    cout << "X";
                    
                    for (int i = 0; i<mid; i++ ){
                        cout << " ";
                    }
                    cout<< endl;
                }
                vertical++;
            }
        }
    return 0;
}
