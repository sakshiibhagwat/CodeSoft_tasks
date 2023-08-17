#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    cout<<"*********** WELCOME TO THE RANDOM NO. GUESSING GAME ***********"<<endl;
    int val;
    srand(time(0));
    char choice;
    do
    {
         cout<<"Enter the value upto which you want to guess:\t";
    cin>>val;
    cout<<endl;
    int random = rand()%val;
    int guess=0,steps=0;
    do
    {
        steps++;
        cout<<"Enter your guess:\t";
        cin>>guess;
        if(guess < random)
        {
            cout<<"Your guess is less than the random number!"<<endl;
        }else if(guess > random)
        {
             cout<<"Your guess is more than the random number!"<<endl;
        }
        else if(guess == random){
            cout<<"YOU WON!!!"<<endl;
            cout<<"The number of moves you took are:\t"<<steps<<endl;
        }

      
    } while (guess != random);
    
          cout<<"Want to try once again?\t Y or N"<<endl;
        cin>>choice;
    } while (choice == 'Y' );
    return 0;
}