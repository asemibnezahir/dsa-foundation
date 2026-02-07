#include<bits/stdc++.h>
using namespace std;
int main()
{
    int math,phy,ds;
    cout<<"Enter marks of 3 subjects:"<<endl;
    cout<<endl<<"Math: ";
    cin>>math;
    cout<<"Physics: ";
    cin>>phy;
    cout<<"Data Structure: ";
    cin>>ds;
    int avg=(math+phy+ds)/3;

    cout<<endl<<"Enter your Choice"<<endl;
    cout<<"1. Show Average"<<endl;
    cout<<"2. Show Grade"<<endl;
    cout<<"3. Show Pass/Fail Status"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Choice: ";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1: cout<<endl<<"Average: "<<avg<<endl;break;
        case 2: 
            cout<<endl<<"Grade: ";
            if(avg>=80)
            {
                cout<<"A+";
            }
            else if(avg>=70)
            {
                cout<<"A";
            }
            else if(avg>=60)
            {
                cout<<"B";
            }
            else if(avg>=50)
            {
                cout<<"C";
            }
            else if(avg>=40)
            {
                cout<<"D";
            }
            else
            {
                cout<<"F";
            }
            cout<<endl;
            break;
        case 3:
            if(math<40||phy<40||ds<40)
            {
                cout<<"Status: Fail"<<endl;
            }
            else
            {
                cout<<endl<<"Status: Pass"<<endl;
            }
            break;
        case 4:
            cout<<"No Instruction, Programme will be closed"<<endl;
            break;
        default:
            cout<<"Invalid Command"<<endl;
    }
    return 0;
}