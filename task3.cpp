#include<iostream>
using namespace std;
class student{
    int id;
    char name[100];
    int marks;
    public:
    void getvalues(){
        cout<<"enter student id:\t";
    cin>>id;
    cout<<endl;
    cout<<"entre student name:\t";
    cin>>name;
    cout<<endl;
    cout<<"enter student marks:\t";
    cin>>marks;
    cout<<endl;
    }
    char putgrade(int marks){
        char a;
        if(marks<=100 && marks>=95)
    {
         a = 'A';
        cout<<a<<"\t\t\t\t";
    }else if(marks<95 && marks>=90)
    {
        a = 'B';
        cout<<a<<"\t\t\t\t";
    }else if(marks<90 && marks>=75)
    {
         a = 'C';
        cout<<a<<"\t\t\t\t";
    }else if(marks<75 && marks>=65)
    {
         a = 'D';
        cout<<a<<"\t\t\t\t";
    }else if(marks<65 && marks>=45)
    {
         a = 'E';
        cout<<a<<"\t\t\t\t";
    }else if(marks<45 && marks>=30){
         a = 'F';
        cout<<a<<"\t\t\t\t";
    }else{
         a = 'G';
        cout<<a<<"\t\t\t\t";
    }
    return 0;
    }
    void putvalues(){
        // cout<<"\t\t\t\t"<<name<<"\t\t\t\t"<<marks<<"\t\t\t\t"<<putgrade(marks)<<endl;
        cout<<putgrade(marks)<<id<<"\t\t\t\t"<<name<<"\t\t\t\t"<<marks<<endl;
    }
};
int main()
{
   student obj[100];
   int count;
   cout<<"*************************WELCOME TO THE STUDENT GRADING SYSTEM*************************"<<endl;
   cout<<"enter the number of students:\t";
   cin>>count;
   cout<<endl;
   for (int i = 0; i < count; i++)
   {  
    obj[i].getvalues();
    cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
   }
   
    cout<<"GRADE\t\t\t\tID\t\t\t\tNAME\t\t\t\tMARKS"<<endl;
    
   for (int i = 0; i < count; i++)
   {
   obj[i].putvalues();
cout<<endl;
   }
   
    return 0;
} 

