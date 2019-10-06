////Ebony Warren
////CS 52
////Final
////Problem 1
//
////Write a program that prompts the user to enter a line of text (including whitespace). The program then replaces the following vocals with numbers: a = 1, e = 2, i = 3, o = 4, u = 5 and outputs the result to the console. The program does not consider case, so a = 1, A = 1, e = 2, E = 2, etc.
//
////Example:
////Input: Hello, how are you?
////Output: H2ll4, h4w 1r2 y45?
//
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(){
//
//    char input[100];
//    long length;
//    cout<<"Input: ";
//    cin.getline(input,100);
//    
//    length=strlen(input);
//    
//    for(int i=0; i<length; i++)
//    {
//        if(input[i]=='a'){
//            input[i] = '1';
//        }
//        else if(input[i]=='e'){
//            input[i] = '2';
//        }
//        else if (input[i]=='i'){
//            input[i] = '3';
//        }
//        else if(input[i]=='o'){
//            input[i] = '4';
//        }
//        else if (input[i]=='u'){
//            input[i] = '5';
//        }
//        else;
//    }
//    
//    cout << "Output: " << input << endl;
//    return 0;
//}
