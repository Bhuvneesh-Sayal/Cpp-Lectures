#include<iostream>
#include<bits/stdc++.h>
#include<ctime>

using namespace std;

int main(){
    // pseudo-random = NOT truly random(but close)

    /*
    srand(time(NULL));

    int num1 = (rand()%6)+1;
    int num2 = (rand()%6)+1;
    int num3 = (rand()%6)+1;

    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;

    return 0;
    */

   /*
    srand(time(0));
    int randNum=rand()%5+1;

    switch (randNum){
        case 1: cout<<"You won a bumper sticker!"<<endl;
                break;
        case 2: cout<<"You won concert tickets!"<<endl;
                break;
        case 3: cout<<"You won a gift card worth $50!"<<endl;
                break;
        case 4: cout<<"You won a free lunch worth $100!"<<endl;
                break;
        case 5: cout<<"You won a tshirt!"<<endl;
                break;
    }
    return 0;
    */

    

    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num = (rand()%100)+1;
    
    cout<<"**********Number Guessing Game**********"<<endl;

    do{
        cout<<"Guess a number between 1-100: ";
        cin>>guess;
        tries++;
        if(guess>num){
            cout<<"Too High!"<<endl;
        }
        else if(guess<num){
            cout<<"Too Low!"<<endl;
        }
        else{
            cout<<"Correct! # of tries: "<<tries<<endl;
        }
    }while(guess != num);

    cout<<"***********End************"<<endl;

    return 0;
    
}