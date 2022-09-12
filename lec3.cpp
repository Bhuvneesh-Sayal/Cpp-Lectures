#include<iostream>
using namespace std;

int main(){


    // string methods

    /*
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);
    */

    // to find a string length

    /*
    if(name.length() > 12){
        cout<<"Your name can't be over 12 characters"<<endl;
    }
    else{
        cout<<"Welcome, "<<name;
    }
    */

   // to find if the string is empty or not


    /*
   if(name.empty()){
    cout<<"You didn't enter your name"<<endl;
   }
   else{
    cout<<"Hello, "<<name;
   }
   */


  // to clear the name from the string

  /*
  name.clear();
  cout<<"Hello, "<<name;
  */

    // to append a string
    
    /*
    name.append("@gmail.com");

    cout<<"Your Username is "<<name;
    */

   //to find the character at specific index value which is writter in (0,1,2,etc)
    
    /*
    cout<<name.at(0);
    */

    //to insert some character in between or starting or end of the string from the index value
    
    /*
    name.insert(0, "@");
    cout<<name;
    */

    // to find something in the string eg-space or character
    
    /*
    cout<<name.find(' ');
    */

    // to erase characters from the string by giving the index values of the characters by adding start value to end value of the index
    
    /*
    name.erase(0,3);
    cout<<name;
    */


    // while loop will continue to execute itself until the condition in the while loop becomes false
    /* string name;

    while(name.empty()){
        cout<<"Enter your name: ";
        getline(cin, name);
    }
    cout<<"Hello, "<<name;
    return 0;
    */


    // do while loop = do some blocks of code first, 
    //                  then repeat again if the condition is true

    /*int number;

    do
    {
        cout<<"Enter a positive number: ";
        cin>>number;
    }while (number<0);

    cout<<"The number is: "<<number<<endl;

    return 0;
    */


   /*
    for(int i = 1; i<=3; i++){
        cout<<"Happy"<<endl;
    }
    return 0;
    */


    // break = break out of a loop
    // continue = skip current iteration

    /*
    for(int i =1; i<=20; i++){
        if(i==13){
            continue;
        }
        cout<<i<<endl;
    }
    */

    int rows, cols;
    char symb;
    cout<<"How many rows? "<<endl;
    cin>>rows;
    
    cout<<"How many columns? "<<endl;
    cin>>cols;

    cout<<"Enter the symbol: ";
    cin>>symb;

    for(int i = 0; i<=rows; i++){
        for(int j=0; j<=cols; j++){
            cout<<symb;
        }
        cout<<endl;
    }
    return 0;


     
}