#include<iostream>
using namespace std;
int main()
{
    int num1,num2,choice;
    char value;
    cout<<"***********************************CALCULATOR**********************************"<<endl;
    do{

        cout<<"Enter first number:\t";
        cin>>num1;
        cout<<endl;
        cout<<"Enter second number:\t";
        cin>>num2;
        cout<<endl;
        cout<<"Select the operation you want to perform:  + , - , * , /"<<endl;
        cout<<"Enter 1 for +"<<endl;
        cout<<"Enter 2 for -"<<endl;
        cout<<"Enter 3 for *"<<endl;
        cout<<"Enter 4 for /"<<endl;
        cin>>choice;
        float result;
        switch (choice)
        {
        case 1:
            result = num1+num2;
            cout<<num1<<"+"<<num2<<" = "<<result<<endl;
            break;
        case 2:
            result = num1-num2;
            cout<<num1<<"-"<<num2<<" = "<<result<<endl;
            break;
        case 3:
            result = num1*num2;
            cout<<num1<<"*"<<num2<<" = "<<result<<endl;
            break;
        case 4:
            result = num1/num2;
            cout<<num1<<"/"<<num2<<" = "<<result<<endl;
            break;
        default:
        cout<<"Please choose correct operator!"<<endl;
            break;
        }
        cout<<"Want to calculate again?"<<endl;
        cout<<"Write 'Y' for Yes and 'N' for NO:\t";
        cin>>value;
    }while(value == 'Y');
    return 0;
}