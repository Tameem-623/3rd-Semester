#include <iostream>
using namespace std;
#if 0 //Activity 1 of Lab 1
class Heater{
private:
	int temp;
public:
	Heater() {
		temp = 15;
	}
	void cooler(){
        temp -= 5;
    }

    void warmer(){
        temp += 5;
    }
	int gettemp() {
		return temp;
	}
};

int main() {
	Heater h1;
	int n;
    cout<<"***The current temprtre is: "<<h1.gettemp()<<"***\n\nTo increase temp, Press 1\nTo decrease temp, Press 2\n";
    cin>>n;
    n==1?h1.warmer():h1.cooler();
	cout << "\n\nNow The Current temperature is: " << h1.gettemp();

	return 0;
}
#endif