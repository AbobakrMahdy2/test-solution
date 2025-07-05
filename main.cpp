#include <iostream>
#include <vector>
using namespace std;

class Time{
    int year;
    int month;
    int day;
public:
    Time(){};
    Time(int year,int month,int day){
        this->year=year;
        this->month=month;
        this->day=day;
    }

    static bool is_expired(Time t){
        Time now(2025,7,5);
        if (t.year<now.year)return true;
        if (t.year==now.year&&t.month<now.month)return true;
        if (t.year==now.year&&t.month<now.month)return true;
        if (t.year==now.year&&t.month==now.month&&t.day<now.day)return true;

        return false;
    }

};

class Product{
     string name;
     int price;
     int quantity;
     bool is_expire;
     Time expire_date;
     bool shipping;
     int weight;
public:
     Product(){};
     Product(string name,int price,int quantity,bool is_expire,Time expire_date,bool shipping,int weight){

         this->name = name;
         this->price = price;
         this->quantity = quantity;
         this->is_expire = is_expire;
         this->expire_date = expire_date;
         this->shipping = shipping;
         this->weight = weight;

     };

};
class CartItem{
    Product p;
    int quantity;
public:
    CartItem(Product pro,int q){
        p=pro;
        quantity=q;
    }
};
class Cart{
    vector<CartItem>products;

public:
    void add(Product pro,int q){
        products.push_back({pro, q});
    }

};

class Customer{
    int balance;
public:
    Customer(){}
    Customer(int b){
        balance=b;
    }

};

void checkout(Customer c,Cart cart){

}

int main(){

    Cart cart;
    Customer customer(500);
    Product cheese("cheese",10,3, true,{2026,5,5}, true,200);
    Product tv("TV",10,1, false,{0,0,0}, true,500);
    Product scratchCard("scratchCard",10,3, false,{0,0,0}, false,0);
    cart.add(cheese, 2);
    cart.add(tv, 3);
    cart.add(scratchCard, 1);
    checkout(customer, cart);


    return 0;
}
