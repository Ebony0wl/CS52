//Ebony Warren
//CS 52
//Assignment #4
//Problem 3


#include <iostream>
#include <string>

using namespace std;

class Employee{
    // private properties/functions cannot be accessed outside the class
private:
    // properties of an employee, must always be private
    string firstName;
    string lastName;
    int pay;
public:
    // default constructor: no parameters
    Employee();
    // constructor with parameters
    Employee(string firstName, string lastName, int pay){
        this->firstName = firstName;
        this->lastName = lastName;
        this->pay = pay;
        
    };

    // getter for first name
    string getFirstName(){
        return firstName;
    }
    // setter for first name
    void setFirstName(string value){
        this->firstName = value;
        
    }
    // getter for last name
    string getLastName(){
    return lastName;
        
    }
    // setter for last name
    void setLastName(string value){
        this->lastName = value;
        
    }// getter for pay
    int getpay(){
        return pay;
        
    }// setter for pay
    void setpay(int amount){
        this->pay = amount;
        
    }
    
};

void fillArray(string* firstName, string* lastName, int* pay, int count, Employee* type[]){
    
    for (int index = 0; index < count; index++){
        cout << "Employee " << (index + 1) << endl;
        cin.ignore();
        cout << "First name: ";
        getline(cin, firstName[index]);
        cout << "Last name: ";
        getline(cin, lastName[index]);
        cout << "Pay: ";
        cin >> pay[index];
        //create employee
        type[index] = new Employee(firstName[index], lastName[index], pay[index]);
    }
    
}

void printEmployee(int count, Employee* type[]){
    
    cout << "Employees: \n";
    
    for (int index = 0; index < count; index++){
       cout << "Name: " << type[index]->getFirstName() << " " << type[index]->getLastName() << " " << type[index]->getpay() << endl;

    }
}

int main(){
    
    bool TF = true;
    int count;
    //check if positive num was entered
    do{
        cout << "Number of employees: ";
        cin >> count;
        if (count <= 0){
            cout << "Please Enter a positive number\n";
            TF = true;}
        else TF = false;
        
    }while(TF);
    //define array for employee class
    Employee* type[count];
    //define array for info
    string* employeeFirstNames = new string[count];
    string* employeeLastNames = new string[count];
    int* employeePay = new int[count];
    
    //functions
    fillArray(employeeFirstNames, employeeLastNames, employeePay, count, type);
    printEmployee(count, type);
    
    return 0;
    
}
