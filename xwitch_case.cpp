#include <iostream>
using namespace std;

int departmentcode;
string departmentname,quotastatus;

void input(){
    cout<<"=== Campus major registration ==="<<endl;
    cout<<"1. Information Technology"<<endl;
    cout<<"2. Electrical Engineering"<<endl;
    cout<<"3. System Information"<<endl;
    cout<<"========================"<<endl;
    
    cout<<"Enter your choice (1-3): ";
    cin>>departmentcode;

}

void choosemajor (){
    switch (departmentcode)
    {
    case 1:

        departmentname = "Information Technology";
        quotastatus = "Available (15 chairs)";
        break;
    
    case 2:
        departmentname = "Electrical Engineering";
        quotastatus = "Full!";
        break;
    
    case 3:
        departmentname = "System Information";
        quotastatus = "Available (5 chairs)";
        break;
    
    default:
        departmentname = "Invalid choice!";
        quotastatus = "Please choose a valid department code (1-3)";
        break;
    }
}

void output(){

    cout<<"\n=== selection results ==="<<endl;
    cout<<"chosen major : "<<departmentname<<endl;
    cout<<"Quota Status : "<<quotastatus<<endl;
    cout<<"========================"<<endl;
}
