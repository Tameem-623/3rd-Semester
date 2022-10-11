#include <iostream>
using namespace std;

class shape{
protected:
    float ar,vol;
public:
    shape():ar(0),vol(0){}
    virtual void Area(){}
    virtual void Volume(){}
    virtual void display() = 0;
};
class point: public shape{
protected:
    float x,y;
public:
    point():x(0),y(0){}
    point(float xx,float yy):x(xx),y(yy){}
    void display(){
        cout << "\nX : " << x << "\nY : " << y << endl;
    }
};

class Circle:public point{
protected:
    float radius;
public:
    Circle():radius(0){}
    Circle(float rr, float xx,float yy):radius(rr),point(xx,yy){}
    void Area(){
        ar =  3.14*(radius*radius);
    }
    void display(){
        cout << "\nArea of Circle :  " << ar << endl;
    }
};

class Cylinder: public Circle{
protected:
    float height;
public:
    Cylinder():height(0){}
    Cylinder(float hh, float rr,float xx,float yy):height(hh),Circle(rr,xx,yy){}
    void Volume(){
        vol  = 3.14*radius*radius*height;
    }
    void display(){
        cout << "\nVolume of Cylinder: " << vol << endl;
    }
};

int main(){

    float rad,height,xpos,ypos;
    cout << "Enter Position X: ";
    cin >> xpos;
    cout << "\nEnter Position Y: ";
    cin >> ypos;
    cout << "\nEnter Radius of Circle: " ;
    cin >> rad;
    cout << "\nEnter Height for Cylinder: " ;
    cin >> height;

    point p1(xpos, ypos); Circle c1(rad,xpos,ypos);
    Cylinder cyl1(height, rad, xpos, ypos);


    shape *sh;
    sh =  &p1;
    sh->display();

    sh =  &c1;
    sh -> Area();
    sh -> display();

    sh =  &cyl1;
    sh -> Volume();
    sh -> display();

    return 0;
}
