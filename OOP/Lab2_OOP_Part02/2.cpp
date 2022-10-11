#include <iostream>
using namespace std;

class Fraction{
private:
    int num,denom;
public:
    Fraction();
    void input();
    void sum(Fraction f1,Fraction f2);
    void display();
};
Fraction::Fraction(){
    num = 0;
    denom = 0;
}
void Fraction::input(){
    char slash;
    cin>>num>>slash>>denom;
}
void Fraction::sum(Fraction f1,Fraction f2){
    num = (f1.num*f2.denom) + (f1.denom*f2.num);
    denom = f1.denom*f2.denom;
}
void Fraction::display(){
    cout<<"Sum = "<<num<<" // "<<denom<<endl;
}
int main(){
    Fraction f1,f2,f;
    int keypress;
    while(1){
        cout<<"Press \n\t1. Sum of Fractions\n\t2. Exit\n";
        cin>>keypress;
        if(keypress==1){
            cout<<"Enter first Fraction: ";
                f1.input();
            cout<<"Enter Second Fraction: ";
                f2.input();
                f.sum(f1,f2);
                f.display();
        }
        else{
            break;
        }
    }
}