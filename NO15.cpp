#include <iostream>
#include <cmath>
using namespace std;

class Data {
	private :
		float payment;
		float loan;
		float rate;
		int years;

	public :
		double paymentAmount ();
		void loanAmount (float loan);
		void interestRate (float rate);
		void yearsOfLoan (float years);
};

void Data :: loanAmount (float loan){
	this -> loan = loan;
}

void Data :: interestRate (float rate){
	this -> rate = rate;
}

void Data :: yearsOfLoan (float years){
	this -> years = years;
}

double Data :: paymentAmount (){
	float term = pow(1.0+rate/12.0, 12.0*years);
	cout << term;
	float payment = (loan * (rate/12)*term)/(term-1);
	cout << payment;
	return payment;
}

int main (){
	Data obj1;
	obj1.loanAmount (2000);
	obj1.interestRate(24.0);
	obj1.yearsOfLoan(0.25);
	obj1.paymentAmount();
	
	return 0;
}

