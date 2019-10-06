//Ebony warren
//Assignment 1
//Problem 2

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

double VIP, VIPnum;
double Prem, Premnum;
double reg, regnum;
double total;
const double tax = 0.0925;

int main(){
    
    //prompt
    cout << "How many tickets would you like to order?" << endl;
    cout << "VIP Tickets ($120):";
    cin >> VIPnum;
    cout << "Premium Tickets ($80):";
    cin >> Premnum;
    cout << "Regular Tickets ($40):";
    cin >> regnum;
    
    //calculate price
    VIP = 120 * VIPnum;
    Prem = 80 * Premnum;
    reg = 40 * regnum;
    //calculate tax
    total = VIP + Prem + reg;
    total = total * tax;
    
    //invoice
    cout<< setw(2) << fixed << showpoint;
    cout << "Invoice: \n";
    cout << "VIP: $120 x " << VIPnum << " = $" << VIP << endl;
    cout << "Premium: $80 x " << Premnum << " = $" << Prem << endl;
    cout << "Regular: $40 x " << regnum << "= $" << reg << endl;
    cout << "Sales Tax: 9.25% = $" << total << endl;
    //reuse total var for the total amount
    total = total + VIP + Prem + reg;
    cout << "Total Price: $" << total << endl;
}
