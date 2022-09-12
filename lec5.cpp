#include<iostream>
#include<bits/stdc++.h>

using namespace std;


// User defined functions
/*
void birthday(string name, int age){
    cout<<"Happy Birthday to "<<name<<"!!"<<endl;
    cout<<"Happy Birthday to "<<name<<"!!"<<endl;
    cout<<"Happy Birthday dear "<<name<<"!!"<<endl;
    cout<<"You are now "<<age<<" years old"<<endl;
}

int main(){

    //function = a block of reusable code
    string name = "Bhuvneesh";
    int age = 22;

    birthday(name, age);
    return 0;
}
*/

// Return Keyword
/*
double square(double length);
double cube(double length);

int main(){
    double length = 7.0;
    double area = square(length);
    double volume = cube(length);

    cout<<"Area: "<<area<<" sqcm"<<endl;
    cout<<"Volume: "<<volume<<" cubic cm"<<endl;

    return 0;
}

double square(double length){
    return length*length;
}
double cube(double length){
    return length*length*length;
}
*/

/*
string concatStrings(string string1, string string2);

int main(){
    string firstName = "Bhuvneesh";
    string lastName = "Sayal";

    string fullName = concatStrings(firstName, lastName);
    cout<<"Hello, "<<fullName<<endl;

    return 0;
}

string concatStrings(string string1, string string2){
    return string1 + " " + string2;
}
*/

/*
void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

int main()
{
    //bakePizza();
    //bakePizza("pepperoni");
    bakePizza("pepperoni", "mushroom");

    return 0;
}

void bakePizza(){
    cout << "Here is your pizza!\n";
}
void bakePizza(string topping1){
    cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(string topping1, string topping2){
    cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}
*/



int myNum = 3;

void printNum();

int main(){
    int myNum = 1;
    printNum();
    cout<<myNum<<"\n";        // a program will first consider local variable rather then a global variable

    return 0;
}

void printNum(){

    int myNum = 2;

    cout<<myNum<<"\n";        
}