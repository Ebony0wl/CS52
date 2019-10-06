//Ebony Warren
//CS 52
//Final
//Problem 33


//Create a class named Shape with one public pure virtual function area() that returns a double value. Create the two classes Square and Rectangle that both publicly inherit from Shape. Both classes should have appropriate instance member variable(s) which are set in the constructor. Both classes should override the area() function of their base class and use the instance variables in their area computation. Use appropriate access modifiers in each class to enforce information hiding.

#include <iostream>
#include <string>

using namespace std;

class Shape{
private:
public:
    virtual double area() = 0;
};
class Square : public Shape{
private:
    double side;
public:
    Square(int x){
        this -> side = x;
    }
    virtual double area() override{
        return side * side;
    }
};

class Rectangle : public Shape{
private:
    double side1;
    double side2;
public:
    Rectangle(int x, int y){
        this -> side1 = x;
        this -> side2 = y;
    }
    virtual double area() override{
        return side1 * side2;
    }
};


int main(){
    
    Square Sqr(2);
    Rectangle Rect(2,3);
    cout << Sqr.area() << endl;
    cout << Rect.area() << endl;
    
    
    return 1;
}

