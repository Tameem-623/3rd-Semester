#include <iostream>
using namespace std;

class BankAccount{
private:
    int Balance;
public:
    BankAccount(int inittail_bal){
       Balance = inittail_bal;
   }
    void display(){
        cout<<"Current Balance: "<<Balance<<endl;
    }
    void Deposit(int money){
        Balance += money;
        display();
    }
    void Withdraw(int moeny){
        if(Balance<=500){
            cout<<"Insufficient Balance.\n";
        }else{
        Balance -=500;
        }
        display();
    }
};
int main(){
    BankAccount A1(1000);
    A1.display();
    A1.Deposit(500);
    A1.Withdraw(500);
    A1.Withdraw(500);
    A1.Withdraw(500);
    return 0;
}

