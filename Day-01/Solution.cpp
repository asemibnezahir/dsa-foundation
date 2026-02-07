#include<bits/stdc++.h>
using namespace std;
int main()
{
    float cel;
    cout<<"Enter temperature in Celsius: ";
    cin>>cel;
    int type;
    cout<<endl<<"Choose storage data type:"<<endl;
    cout<<"1. int"<<endl;
    cout<<"2. float"<<endl;
    cout<<"3. double"<<endl;
    cout<<"Choose: ";
    cin>>type;
    double far=(cel*9/5)+32;
    cout<<endl<<"Converted Fahrenheit: ";
    if(type==1)
    {
        cout<<(int)far<<endl;
        cout<<"Stored As: int"<<endl;
        cout<<"Memory Size: "<<sizeof(int)<<" bytes"<<endl;
    }
    else if(type==2)
    {
        cout<<fixed<<setprecision(2)<<far<<endl;
        cout<<"Stored As: float"<<endl;
        cout<<"Memory Size: "<<sizeof(float)<<" bytes"<<endl;
    }
    else if(type==3)
    {
        cout<<fixed<<setprecision(4)<<(double)far<<endl;
        cout<<"Stored As: double"<<endl;
        cout<<"Memory Size: "<<sizeof(double)<<" bytes"<<endl;
    }
    else
    {
        cout<<"Invalid Data Type"<<endl;
    }
    return 0;
}