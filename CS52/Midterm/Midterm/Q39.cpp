//
//  Q39.cpp
//  Midterm
//
//  Created by Ebony Warren on 7/8/18.
//  Copyright © 2018 CS52. All rights reserved.
//
#include <iostream>
using namespace std;

typedef char* CharPtr;

int shortestName (const char *string, const int size){
    int funcIndex;
    for(int i = 0; string[i] < size; i++){
        int count = 0;
        for (int k = 0; string[k] != '\0'; k++){
            count++;
        }
        if (count < funcIndex){
            funcIndex = count;
    }
    
}

int main(){
    
    int numNames;
    int index;
    cout << "How Many Names? ";
    cin >> numNames;
    
    CharPtr *name = new CharPtr[numNames];
    
    for (int i = 0; i<numNames; i++){
        name[i] = new char[100];
    }
    for (int k = 0; k<numNames; k++){
        cout << "Enter Name:";
        cin >> name[k];
    }
    index = shortestName(name, numNames);
    
    //find which name has same index
    
    cout << //name[][] shortest name
    << " " << index;
    

    return 0;
}
