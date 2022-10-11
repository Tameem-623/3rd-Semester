#include <iostream>
using namespace std;

class tollbooth{
private:
    unsigned int carsCount;
    double money;
public:
    tollbooth(unsigned int cs, double amount);
    void payingCar();
    void nopayCar();
    void display()const;
};
tollbooth::tollbooth(unsigned int cs, double amount){
    carsCount = cs;
    money = amount;
}
void tollbooth::payingCar(){
    carsCount++;
    money = money + 0.50;
}
void tollbooth::nopayCar(){
    carsCount ++;
}
void tollbooth::display()const {
    cout<<"\nTotal Number of Cars: "<<carsCount;
    cout<<"\nTotal Amount of Money Collected: "<<money;
}
int main(){
    tollbooth tb1(0,0);
    char keypress;
    int ascii_code;
    while(1){
        cout<<"Choose the Appropriate Option: \n"
        "1. \tToll Payed. \n2. \tUnpayed Toll."
        "\nEsc Key. To print total Cash and Cars"<<endl;
        keypress=getch();
        ascii_code=keypress;
        if(ascii_code==49){
            tb1.payingCar();
        }
        if(ascii_code==50){
            tb1.nopayCar();
        }
        if(ascii_code==27){
            tb1.display();
            break;
        }

    }
    return 0;
}