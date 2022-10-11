#include <iostream>
using namespace std;

class patient{
private:
    string name;
    long pnum;
public:
    patient();
    void getdata();
    void putdata();
};
patient::patient(){
    name = "NILL";
    pnum = 0;
}
void patient::getdata(){
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Number: ";
    cin>>pnum;
}
void patient::putdata(){
    cout<<"*Patient Name: "<<name<<endl;
    cout<<" Patient Number: "<<pnum<<endl;
}
int main(){
    patient arr[30];
    for(int i=0;i<30;i++){
           arr[i].getdata();
    }
    cout<<endl<<endl;
     for(int i=0;i<30;i++){
           arr[i].putdata();
    }

    return 0;
}