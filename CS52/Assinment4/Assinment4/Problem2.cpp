//Ebony Warren
//CS 52
//Assignment #4
//Problem 2


#include <iostream>
#include <string>

using namespace std;

class Date{
    
private:
    int day;
    int month;
    int year;
    
public:
    // default constructor: no parameters
    Date();
    // constructor with parameters
    Date(int day, int month, int year){
        this->day = day;
        this->month = month;
        this->year = year;
    };
    
    // getter for day
    int getDay(){
        return day;
    }
    
    // setter for day
    void setDay(int value){
        this->day = value;
    }
    
    // getter for month
    int getMonth(){
        return month;
    }
    
    string getLMonth(){
        if (month == 1)
            return "January";
        else if (month == 2)
            return "Febuary";
        else if (month == 3)
            return "March";
        else if (month == 4)
            return "April";
        else if (month == 5)
            return "May";
        else if (month == 6)
            return "June";
        else if (month == 7)
            return "July";
        else if (month == 8)
            return "Auguest";
        else if (month == 9)
            return "September";
        else if (month == 10)
            return "October";
        else if (month == 11)
            return "November";
        else if (month == 12)
            return "December";
        else
            return "error";
    }
    
    // setter for month
    void setMonth(int value){
        this->month = value;
    }
    
    // getter for year
    int getYear(){
        return year;
    }
    
    // setter for pay
    void setYear(int value){
        this->year = value;
    }
    
    void MMDDYYY();
    void classicDate();
    void britishDate();
    
};

int main(){
    int day,month,year;
    cout << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;
    
    Date yourDate(day, month, year);
    yourDate.MMDDYYY();
    yourDate.classicDate();
    yourDate.britishDate();
    
    return 0;
}

void Date::MMDDYYY(){
    cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}

void Date::classicDate(){
    cout << getLMonth() << " " << getDay() << ", " << getYear() << endl;
}

void Date::britishDate(){
    cout << getDay() << ". " << getLMonth() << " " << getYear() << endl;
}
