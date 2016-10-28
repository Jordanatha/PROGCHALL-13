#include <iostream>
#include <string>
using namespace std;

class Employee {
	string name;
	int idNumber;
	string department;
	string position;
	public :
		Employee (string name, int idNumber, string department, string position);
		Employee (string name, int idNumber);
		Employee ();
		string getName();
		int getID();
		string getDepartment();
		string getPosition();
};

string Employee :: getName (){
	return this -> name;
}

int Employee :: getID (){
	return this -> idNumber;
}

string Employee :: getDepartment (){
	return this -> department;
}

string Employee :: getPosition(){
	return this -> position;
}

Employee :: Employee (string name, int idNumber, string department, string position){
	this -> name = name;
	this -> idNumber = idNumber;
	this -> department = department;
	this -> position = position;
}

Employee ::	Employee (string name, int idNumber){
	this -> name = name;
	this -> idNumber = idNumber;
	this -> department = "";
	this -> position = "";
}

Employee :: Employee () {
	this -> name = "";
	this -> idNumber = 0;
	this -> department = "";
	this -> position = "";
}

int main (){

	Employee employee1 = Employee ("Susan", 4001256, "Accounting", "Vice President");
	Employee employee2 = Employee ("Mark", 4001255, "IT", "Programmer");
	Employee employee3 = Employee ("Joy", 4001254, "Manufacturing", "Engineer");
	
	Employee employeeArray [3] = {employee1, employee2, employee3};
	
	cout << employeeArray[0].getName() << "\t" << employeeArray[0].getID() << "\t" <<  employeeArray[0].getDepartment() << "\t" << employeeArray[0].getPosition();
	cout << endl;
	cout << employeeArray[1].getName() << "\t" << employeeArray[1].getID() << "\t" << employeeArray[1].getDepartment() << "\t\t" << employeeArray[1].getPosition();
	cout << endl;
	cout << employeeArray[2].getName() << "\t" << employeeArray[2].getID() << "\t" << employeeArray[2].getDepartment() << "\t" << employeeArray[2].getPosition();
	return 0;
}


