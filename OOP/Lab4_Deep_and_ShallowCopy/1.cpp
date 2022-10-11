#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class employee{
private:
    string name,department;
    double salary, service;
public:
   employee():name(""),department(""),salary(0.0),service(0.0){}
   employee(string n,string d,double s,double sv){
   name = n;
   department = d;
   salary = s;
   service = sv;
   }
   void input();
   void show();
   string getn();
   string getd();
   double getsal();
   double getser();
   ~employee(){
       // delete[] name;
       // delete[] department;
   }
};
employee obj1;
void employee::input(){
    string name,dep;
    double sal,ser;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Department:";
    cin>>dep;
    cout<<"Enter Salary:";
    cin>>sal;
    cout<<"ENter Service years: ";
    cin>>ser;
    obj1 = employee(name,dep,sal,ser);
}
void employee::show(){
    cout<<name<<endl;
    cout<<department<<endl;
    cout<<salary<<endl;
    cout<<service<<endl;
}
string employee::getn(){
    return name;
}
string employee::getd(){
    return department;
}
double employee::getsal(){
    return salary;
}
double employee::getser(){
    return service;
}

int main()
{
   /* string name,dep;
    double sal,ser;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Department:";
    cin>>dep;
    cout<<"Enter Salary:";
    cin>>sal;
    cout<<"ENter Service years: ";
    cin>>ser;
    //employee obj1=employee(name,dep,sal,ser);
     obj1 = employee(name,dep,sal,ser);*/
    obj1.input();
    obj1.show();
    return 0;
}
