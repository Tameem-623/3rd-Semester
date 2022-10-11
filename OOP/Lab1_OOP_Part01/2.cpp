#include <iostream>
using namespace std;

#if 1  //Activity 2 of Lab 1
class point{
private:
    int x,y;
public:
    point(){
        x=0;
        y=0;
    }
    void display(){
        cout<<"("<<x<<", "<<y<<")";
    }
    void displayup(){
        cout<<"("<<x<<", "<<y<<")";
    }
    void setx(int X){x=X;}
    void sety(int Y){y=Y;}
};
int main(){
    point p1,p2;
    cout<<"\n\nThe original P1 = ";
    p1.display();
    p1.setx(2);
    p1.sety(3);
    cout<<"\n\nThe updated P1 = ";
    p1.displayup();

    cout<<"\n\nThe original P2 = ";
    p2.display();
    p2.setx(6);
    p2.sety(3);
    cout<<"\n\nThe updated P2 = ";
    p2.displayup();
    return 0;
}
#endif // 1