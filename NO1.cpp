#include <iostream>
#include <string>
using namespace std;

class Date{
	int day;
	int month;
	int year;
	
	string monthName[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	public :
		Date (int day, int month, int year);
		void printFirstForm();
		void printSecondForm();
		void printThirdForm();

};

Date :: Date (int day, int month, int year){
	this -> day = day;
	this -> month = month;
	this -> year = year;
}

void Date :: printFirstForm(){
	cout << month << "/" << day << "/" << year << endl;
}

void Date :: printSecondForm(){
	cout << monthName[month-1] << " " << day << ", " << year << endl;
}

void Date :: printThirdForm(){
	cout << day << " " << monthName[month-1] << " " << year << endl;
}

int main (){
	Date newDate = Date(25, 12, 2000);
	newDate.printFirstForm();
	newDate.printSecondForm();
	newDate.printThirdForm();
	return 0;
}
