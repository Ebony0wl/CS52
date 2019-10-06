//Ebony Warren
//CS 52
//Assignment #5
//Problem 1

#include <iostream>
#include <string>

using namespace std;

class item{
private:
    string  title;
    string  description;
    double  price;
    
public:
    
    virtual void print()=0;
    
    // getter for title
    string getTitle(){
        return title;
    }
    // setter for title
    void setTitle(string value){
        this->title = value;
    }
    // getter for description
    string getDescription(){
        return description;
    }
    // setter for description
    void setDescription(string value){
        this->description = value;
    }
    // getter for price
    double getPrice(){
        return price;
    }
    // setter for pay
    void setPrice(double amount){
        this->price = amount;
    }

};

class book: public item{
private:
    int pageCount;
public:
    void print(){
       cout << "Book Title: " << getTitle() << endl << "Description: " << getDescription() << endl << endl;
    }
    // getter for page
    double getPageCount(){
        return pageCount;
    }
    // setter for page
    void setPageCount(int amount){
        this->pageCount = amount;
    }
    
};

class movie: public item{
private:
    int length;
public:
    void print(){
        cout << "Movie Title: " << getTitle() << endl << "Description: " << getDescription() << endl << endl;
    }
    // getter for length
    double getLength(){
        return length;
    }
    // setter for length
    void setLength(int amount){
        this->length = amount;
    }
    
};

class cd: public item{
private:
    int trackCount;
public:
    void print(){
        cout << "CD Title: " << getTitle() << endl << "Description: " << getDescription() << endl << endl;
    }
    // getter for length
    double getTrackCount(){
        return trackCount;
    }
    // setter for length
    void setTrackCount(int amount){
        this->trackCount = amount;
    }

};

class shoppingCart{
    //The cart must have functions to add an item and print the items currently in the cart to the console by calling each object’s print()
private:
    int maxItem;
    int index;
    item** itemArray;
    
public:
    //shoppingCart();
    shoppingCart(int maxItem){
        this -> maxItem = maxItem;
        itemArray = new item*[maxItem];
        this -> index = 0;
    };
    
    //item** itemArray = new item*[maxItem];
    
    void add(item* thing){
        if(index <= maxItem){
            itemArray[index] = thing;
           index++;
        };
    }
    
    void print(){
        for (int i = 0; i < index; i++){
            itemArray[i] -> print();
        }
    }
};

class customer{
    
    // stores an id, the first name and the last name and a pointer to a shopping cart object
private:
    int id;
    string firstName;
    string lastName;
    shoppingCart* cart;
public:
    customer(int maxItem){
        cart = new shoppingCart(maxItem);
        //shoppingCart(maxItem);
    };
    
    // getter for cart
    shoppingCart* getCart(){
        return cart;
    }
    // setter for cart
    void addToCart(item* item){
        cart->add(item);
    }
    
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
        
    }// getter for id
    int getid(){
        return id;
        
    }// setter for id
    void setid(int num){
        this->id = num;
    }
};

int main(){
    customer cust1(20);
    book book;
    book.setTitle("Romeo and Juliet");
    book.setDescription("Lovers die in the end");
    movie movie;
    movie.setTitle("Titanic");
    movie.setDescription("A big boat sinks");
    cd cd;
    cd.setTitle("Half Love");
    cd.setDescription("Party Music");
    shoppingCart* custCart;
    //item *itemB = &book;
    //item *itemM = &movie;
    //item *itemC = &cd;
    cust1.addToCart(&book);
    cust1.addToCart(&movie);
    cust1.addToCart(&cd);
    custCart = cust1.getCart();
    custCart -> print();
    return 0;
}
