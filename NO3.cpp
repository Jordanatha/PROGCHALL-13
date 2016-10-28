#include <iostream>
using namespace std;

class Car{
	private:
		int yearModel;
		string make;
		int speed;
	
	public:
		Car(int year, string makee, int speedd){
			yearModel = year;
			make = makee;
			speed = speedd;
		}
		
		void setYearModel (int year){
			yearModel = year;
		}
		void setMake (int making){
			make = making;
		}
		void setSpeed (int speed){
			this -> speed = speed;
		}
		
		int getYearModel (){
			return yearModel;
		}
		string getMake (){
			return make;
		}
		int getSpeed (){
			return speed;
		}
		
		void accelerate (){
			speed += 5;
			cout << "Speed is now : " << speed;
		}
		
		void carBrake (){
			speed -= 5;
			cout << "Speed is now : " << speed;
		}
};

int main (){
	char choice;
	Car obj1 (1991, "Haha", 0);
	cout << "Year Model : " << obj1.getYearModel() << endl;
	cout << "Make : " << obj1.getMake() << endl;
	cout << "Speed : " << obj1.getSpeed() << endl;
	
	cout << "Do u want to accelerate, or break? (A/B) : ";
	cin >> choice;
	
	if (choice == 'a' || choice == 'A'){
		obj1.accelerate();
	}
	else if (choice == 'b' || choice == 'B'){
		obj1.carBrake();
	}
	
	
	return 0;
}
