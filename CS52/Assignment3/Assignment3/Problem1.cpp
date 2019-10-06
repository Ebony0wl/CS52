////Ebony Warren
////CS 52
////Assignment #3
////Problem 1
//
//#include <stdio.h>
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int min (int array[][5], const int SIZE){
//    int minNum = array[0][0];
//      for(int i = 0; i < SIZE; i++){
//          for(int k = i + 1; k < SIZE; k++){
//              if(array[i][k] <= minNum){
//                  minNum = array[i][k];
//              }
//          }
//      }
//    return minNum;
//}
//
//int max (int array[][5], const int SIZE){
//    int maxNum = array[0][0];
//    for(int i = 0; i < SIZE; i++){
//        for(int k = i + 1; k < SIZE; k++){
//            if(array[i][k] >= maxNum){
//                maxNum = array[i][k];
//            }
//        }
//    }
//    return maxNum;
//}
//
//double avg (int array[][5], const int SIZE){
//    cout << setw(2);
//    double sum = 0;
//    double count = 0;
//    double avgNum = 0;
//    for(int i = 0; i < SIZE; i++){
//        for(int k = 0; k < SIZE; k++){
//            sum += array[i][k];
//            count++;
//        }
//    }
//    avgNum = sum / count;
//    return avgNum;
//}
//
//typedef int* intPtr[][5];
//
//int main(){
//    const int SIZE = 5;
//    int matrix [SIZE][SIZE] = {
//        {7, 2,10, 3, 6},
//        {1, 12, 2, 0, 20},
//        {3,14,19, 5, 4},
//        {6, 0, 17, 18, 8},
//        {1, 13, 10, 9, 11}
//    };
//
//    //intPtr A;
//  //  A = matrix;
//    
//    int maxInt = max (matrix, SIZE);
//    int minInt = min (matrix, SIZE);
//    double avgInt = avg (matrix, SIZE);
//    
//    cout << setw(2);
//    cout << "Max: "<< maxInt << "\nMin: " << minInt << "\nAvg: " << avgInt << endl;
//    
//    
//    return 0;
//}
