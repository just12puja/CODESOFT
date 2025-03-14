#include <iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int guessNumber=rand()%100+1;
    int userNumber;
    cout<<"Guess any number between 1 to 100 : "<<endl;
    
    do{
        cout<<"Enter your number:";
        cin>>userNumber;
        if(userNumber>guessNumber)
        cout<<"Too High!,Try Again:)"<<endl;
        else if(userNumber<guessNumber)
        cout<<"Too low!,Try Again:)"<<endl;
        else
        cout<<"Congratulations, you guessed the correct number!..(*+*)"<<endl;
    }
    while(userNumber!=guessNumber);
    return 0;
}