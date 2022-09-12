#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

/*This is a 
multi-line comment

int main(){

    //This is a comment


    cout<<"This is my First Lecture."<<endl;
    cout<<"How are you doing everybody?";
    return 0;
}
*/

int main(){
    //integer(whole num)

    int age =22;
    int year=2022;

    //double(num including decimal)

    double price = 25.55;
    double temp = 44.9;

    //char(single character)

    char grade = 'A';
    char sign = '$';

    //boolean(true or false)

    bool CEO = true;
    bool forsale = false;

    //string(objects that represnts a sequence of text)
    string name = "Bhuvneesh";
    string day = "Monday";
    string food = "Rajma Chawal";

    //constant(used for fixing the value of the variable)
    const double PI = 3.141592;
    const int LIGHT_SPEED = 3000000;

    //Arithmetic Operations
    /*arithmetic operators = return the result of a 
    specific arithmetic operation(+ - * /)*/

    int students = 45;

    //students = students + 2;
    //students+=2;
    //students++;

    //students = students -1;
    //students-=students;
    //students--;

    //students = students*2;
    //students*=2;

    //students/=students;

    int remainder = students%2;

    //process of doing arithmetic operations
    /*1. parenthesis
    2. multiplication & division
    3. addition & sub. */

    int sum = 20 - 5 + 7 * 5 / 5;
    cout<<sum<<endl;

    //cout(insertion operator)
    //cin(extraction operator)

    /*string yourname;
    cout<<"What's your name?"<<endl;
    getline(cin>>ws, yourname);
    cout<<"Hello, "<<yourname<<endl;
    cout<<"22";*/

    /*double x = 5.99;
    double y = 7;
    double z; */

    //z = max(x,y);
    //z = min(x,y);
    //z = pow(2,4);  
    //z = sqrt(16); //returns the sq.root of the given argument
    //z = abs(-8); //returns the absolute value of the argument
    //z = round(x); //returns the rounded off value of the argument
    //z = ceil(x); //returns the smallest possible integer value which is greater than or equal to the given argument
    //z = floor(x); //returns the largest possible integer value which is less than or equal to the given argument


    //cout<<z<<endl;

    /*double a;
    double b;
    double c;

    cout<<"Enter side A: ";
    cin>>a;
    cout<<"Enter side B: ";
    cin>>b;
    a = pow(a,2);
    b = pow(b,2);
    c = sqrt(a + b);

    cout<<"Side C: "<<c<<endl;
    */

   //if statements = do something if a condition is true.
   //                   if not, then don't do it.

   int yage;
   cout<<"Enter your age: ";
   cin>>yage;

   if(yage >= 18){
       cout<<"You are eligible to vote";
   }
   else if(yage<0){
       cout<<"You haven't born yet";
   }
   else{
       cout<<"You're not eligible to vote";
   }
    return 0;
}