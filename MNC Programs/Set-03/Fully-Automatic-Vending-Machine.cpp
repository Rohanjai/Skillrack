#include <bits/stdc++.h>
 
using namespace std;
void print(string s){
    cout<<"Enjoy Your "<<s;
}
void coffee(int &n){
    switch(n){
        case 1:
            print("Espresso Coffee");
            break;
        case 2:
            print("Cappuccino Coffee");
            break;
        case 3:
            print("Latte Coffee");
            break;
        default:
            cout<<"Invalid Option!";
    }
}
void tea(int &n){
    switch(n){
        case 1:
            print("Plain Tea");
            break;
        case 2:
            print("Assam Tea");
            break;
        case 3:
            print("Ginger Tea");
            break;
        case 4:
            print("Cardamom Tea");
            break;
        case 5:
            print("Masala Tea");
            break;
        case 6:
            print("Lemon Tea");
            break;
        case 7:
            print("Green Tea");
            break;
        case 8:
            print("Organic Darjeeling Tea");
            break;
        default:
            cout<<"Invalid Option!";
    }
}
void soup(int &n){
    switch(n){
        case 1:
            print("Hot and Sour Soup");
            break;
        case 2:
            print("Veg Corn Soup");
            break;
        case 3:
            print("Tomato Soup");
            break;
        case 4:
            print("Spicy Tomato Soup");
            break;
        default:
            cout<<"Invalid Option!";
    }
}
void beverages(int &n){
    switch(n){
        case 1:
            print("Hot Chocolate Drink");
            break;
        case 2:
            print("Badam Drink");
            break;
        case 3:
            print("Badam-Pista Drink");
            break;
        default:
            cout<<"Invalid Option!";
    }
}
int main(int argc, char** argv)
{
    char ch;
    int n;
    cin>>ch>>n;
    ch=tolower(ch);
    switch(ch){
        case 'c':
            coffee(n);
            break;
        case 't':
            tea(n);
            break;
        case 's':
            soup(n);
            break;
        case 'b':
            beverages(n);
            break;
        default:
            cout<<"Invalid Option!";
    }


}