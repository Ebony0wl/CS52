//Ebony Warren
//CS 52
//Assignment #3
//Problem 3

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <stdio.h>

using namespace std;

//char repeat(char sentence[], int size){
//    char letter;
//    letter = *sentence;
//    int j = 1;
//    for (int i = 0; i < size; i++){
//        if(letter != sentence[i]){
//            i++;
//        }else{
//            letter = sentence [j++];
//            i = 0;
//    }
//    }
////    int i = 1;
////    int j = 1;
////    int tmp = 0;
////    while(i < size){
////        if (letter != sentence[i]){
////            i++;
////           // return letter = 'z';
////
////        }
////        else if ( letter == sentence[i] && i != j - 1){
////            tmp = i;
////            letter = sentence[j++];
////            i = 1;
////            //return 't';
////        }//else i++;
////    }
//    return letter;
//}

char repeat_ch(char *string)
{
    char array[130] = {0};
    char *p = string;
    
    for (const char *p=string; *p; ++p) {
        array[*p] += 1;
    }
    for (const char *p=string; *p; ++p) {
        if (array[*p] == 1) {
            return *p;
        }
    }
    return '\0';
}

int main(){
    //string Sinput;
    char input[11];
    cout << "Input: ";
    cin.getline(input, 11);
    //int size = Sinput.length();
    
    char output = repeat_ch(input);
    cout << "Output: " << output << endl;
    
    return 0;
}
