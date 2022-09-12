#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    /*
    char op;
    double n1, n2, result;

    cout<<"************* CALCULATOR ***************\n";

    cout<<"Enter the operator (+ - * /): ";
    cin>>op;
    
    cout<<"Enter #1: ";
    cin>>n1;

    cout<<"Enter #2: ";
    cin>>n2;

    switch (op)
    {
    case '+':
        result = n1 + n2;
        cout<<"Result: "<<result<<endl;
        break;
    
    case '-':
        result = n1 - n2;
        cout<<"Result: "<<result<<endl; 
        break;

    case '*':
        result = n1*n2;
        cout<<"Result: "<<result<<endl;
        break;
    case '/':
        result = n1/n2;
        cout<<"Result: "<<result<<endl;
        break;
    default:
        cout<<"Invalid Operator entered. Enter a valid operator.";
        break;
    }
    return 0;
    */
   // && = check if two conditions are true
   // || = check if at least one of two conditions is true
   // ! = reverses the logical state of its operand

/*
   int temp; 
   cout<<"Enter the temperature: ";
   cin>>temp;

   if(temp>0 && temp<30){
    cout<<"the temeperature is good";
   }
   else{
    cout<<"the temperature is bad!";
   }
   */
  /*
  int temp; 
  bool sunny = true;
   cout<<"Enter the temperature: ";
   cin>>temp;

   if(temp<=0 || temp>=30){
    cout<<"the temeperature is bad! "<<endl;
   }
   else{
    cout<<"the temperature is good"<<endl;
   }
   if(sunny){
    cout<<"It is sunny outside";
   }
   else{
    cout<<"It is cloudy outside";
   }
   */

  double temp;
  char unit;

  cout<<"****** Temperature Conversion Program *******"<<endl;
  cout<<"F = Fahrenheit"<<endl;
  cout<<"C = Celsius"<<endl;
  cout<<"What unit would you like to convert to: ";
  cin>>unit;

  if(unit == 'F' || unit == 'f'){
    cout<<"Enter the temperature in celsius: ";
    cin>> temp;

    temp = (1.8*temp) + 32.0;
    cout<<"Temperature is: "<<temp<<" F\n";
  }
  else if(unit == 'C' || unit == 'c'){
    cout<<"Enter the temperature in Fahrenheit: ";
    cin>>temp;

    temp = (temp - 32)/1.8;
    cout<<"Temperature is: "<<temp<<" C\n";
  }
  else{
    cout<<"Error! Enter only C or F"<<endl;
  }
  return 0;
}