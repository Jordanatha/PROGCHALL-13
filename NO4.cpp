#include <iostream>
using namespace std;

class Data{
	private:
		string name;
		string address;
		int age;
		string phoneNum;
		
	public:
		void setName (string customName);
		void setAddress (string customAddress);
		void setAge (int customAge);
		void setNum (string customNum);
		
		string getName() const{
			return name;
		}
		string getAddress () const{
			return address;
		}
		int getAge () const{
			return age;
		}
		string getNum () const{
			return phoneNum;
		}
};

void Data :: setName (string customName){
	name = customName;
}

void Data :: setAddress (string customAddress){
	address = customAddress;
}

void Data :: setAge (int customAge){
	age = customAge;
}

void Data :: setNum (string customNum){
	phoneNum = customNum;
}

int main (){
	Data obj1;
	
	obj1.setName("Jordanatha");
	obj1.setAddress("Budi Indah");
	obj1.setAge(18);
	obj1.setNum("089627888389");
	
	cout << "Name\t\t: " << obj1.getName () << endl;
	cout << "Address\t\t: " << obj1.getAddress () << endl;
	cout << "Age\t\t: " << obj1.getAge () << endl;
	cout << "Phone Num\t: " << obj1.getNum () << endl << endl;
	
	Data obj2;
	
	obj2.setName("Sebastian");
	obj2.setAddress("Budi Indah");
	obj2.setAge(16);
	obj2.setNum("089627888388");
	
	cout << "Name\t\t: " << obj2.getName () << endl;
	cout << "Address\t\t: " << obj2.getAddress () << endl;
	cout << "Age\t\t: " << obj2.getAge () << endl;
	cout << "Phone Num\t: " << obj2.getNum () << endl << endl;
	
	Data obj3;
	
	obj3.setName("Handy");
	obj3.setAddress("Budi Indah");
	obj3.setAge(4);
	obj3.setNum("Null");	
	
	cout << "Name\t\t: " << obj3.getName () << endl;
	cout << "Address\t\t: " << obj3.getAddress () << endl;
	cout << "Age\t\t: " << obj3.getAge () << endl;
	cout << "Phone Num\t: " << obj3.getNum () << endl;
	
	return 0;
}
