#include <iostream>
using namespace std;
#include<string.h>
#include<cstring>
class Employee{
	private:
		char* name;
		char* department;
		double salary;
		double period_of_service;

	public:
		Employee();
		Employee(char n[], char d[], double s, double p);
		Employee(const Employee& e);
		~Employee();
		void show();
		void input();
};


Employee::Employee(): name(), department(), salary(0.0), period_of_service(0.0){
		}

Employee::Employee(char n[], char d[], double s, double p): name(n), department(d), salary(s), period_of_service(p){
		}

Employee::Employee(const Employee& e){
			cout<<"\n\nDeep Custom copy Constructor...\n";
			int len1 = strlen(e.name);
			name = new char[len1+ 1];
            strcpy(name, e.name);

			int len2 = strlen(e.department);
			department = new char[len2+ 1];
			strcpy(department, e.department);

			salary = e.salary;
			period_of_service = e.period_of_service;
		}
Employee::~Employee(){
			cout<<"\n\nObject Terminated....\n";
			delete[] name;
			delete[] department;
		}
void Employee::show(){
			cout<<"\n\nName: "<<name<<"\n";
			cout<<"Department: "<<department<<"\n";
			cout<<"Salary: "<<salary<<"\n";
			cout<<"period of service: "<<period_of_service<<"\n\n";
		}
void Employee::input(){
	char a[20];
	cout<<"Enter Employee name: \n";
	cin.getline(a, 20);
	name = new char[strlen(&a[0])+1];
	//cout<<"\n\n*******\n\n"<<strlen(&a[0]);
	strcpy(name, &a[0]);
	char b[20];
	cout<<"Enter Employee department: \n";
	cin.getline(b,20);
	department = new char[strlen(&b[0]) +1];
	strcpy(department, &b[0]);
	cout<<"Enter Employee Salary: \n";
	cin>>salary;
	cout<<"Enter Employee Period of service: \n";
	cin>>period_of_service;
}

int main(){
	Employee e1(&'A',&'D',0,0);
	e1.show();
	e1.input();
	e1.show();
	Employee e2 = e1;
	e2.show();
	Employee e3(e1);
	e3.show();
}