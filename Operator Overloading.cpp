// Contribution by Hafiz Hamza (https://github.com/hmhamza)

#include <iostream>
using namespace std;
class Fraction{
	int numerator;
	int denominator;

	friend ostream& operator<<(ostream &_cout, Fraction obj){
		_cout << obj.numerator << "/" << obj.denominator << endl;
		return _cout;
	}

	friend istream &operator>>(istream &_cin, Fraction &obj){
		cout << "Enter numerator: ";
		_cin >> obj.numerator;
		cout << "Enter denominator";
		_cin >> obj.denominator;
		return _cin;
	}

public:
	Fraction(){
		numerator = 0;
		denominator = 1;
	}

	Fraction(int n, int d){
		numerator = n;
		denominator = d;
	}

	Fraction(const Fraction &obj){
		numerator = obj.numerator;
		denominator = obj.denominator;
	}

	Fraction operator=(const Fraction &obj){
		numerator = obj.numerator;
		denominator = obj.denominator;
		return *this;
	}

	Fraction operator+(const Fraction &obj){
		Fraction returnObj;
		returnObj.numerator = (numerator*obj.denominator) + (obj.numerator*denominator);
		returnObj.denominator = denominator*obj.denominator;
		return returnObj;
	}

	Fraction operator+(int integer){
		Fraction returnObj;
		returnObj.numerator = numerator + (integer*denominator);
		returnObj.denominator = denominator;
		return returnObj;
	}

	Fraction operator-(const Fraction &obj){
		Fraction returnObj;
		returnObj.numerator = (numerator*obj.denominator) - (obj.numerator*denominator);
		returnObj.denominator = denominator*obj.denominator;
		return returnObj;
	}

	Fraction operator-(int integer){
		Fraction returnObj;
		returnObj.numerator = numerator - (integer*denominator);
		returnObj.denominator = denominator;
		return returnObj;
	}

	Fraction operator*(const Fraction &obj){
		Fraction returnObj;
		returnObj.numerator = numerator*obj.numerator;
		returnObj.denominator = denominator*obj.denominator;
		return returnObj;
	}

	Fraction operator*(int integer){
		Fraction returnObj;
		returnObj.numerator = numerator*integer;
		returnObj.denominator = denominator;
		return returnObj;
	}

	Fraction operator/(const Fraction &obj){
		Fraction returnObj;
		returnObj.numerator = numerator*obj.denominator;
		returnObj.denominator = denominator*obj.numerator;
		return returnObj;
	}

	Fraction operator/(int integer){
		Fraction returnObj;
		returnObj.numerator = numerator;
		returnObj.denominator = denominator*integer;
		return returnObj;
	}

	Fraction operator++(){						//pre-increment
		numerator = numerator + denominator;
		return *this;
	}

	Fraction operator++(int u){						//post-increment
		Fraction temp = *this;
		numerator = numerator + denominator;
		return temp;
	}

	Fraction operator--(){						//pre-decrement
		numerator = numerator - denominator;
		return *this;
	}

	Fraction operator--(int u){						//post-decrement
		Fraction temp = *this;
		numerator = numerator - denominator;
		return temp;
	}

	Fraction operator+=(const Fraction &obj){
		*this = *this + obj;
		return *this;
	}

	Fraction operator+=(int integer){
		*this = *this + integer;
		return *this;
	}

	Fraction operator-=(const Fraction &obj){
		*this = *this - obj;
		return *this;
	}

	Fraction operator-=(int integer){
		*this = *this - integer;
		return *this;
	}

	Fraction operator*=(const Fraction &obj){
		*this = *this * obj;
		return *this;
	}

	Fraction operator*=(int integer){
		*this = *this * integer;
		return *this;
	}

	Fraction operator/=(const Fraction &obj){
		*this = *this / obj;
		return *this;
	}

	Fraction operator/=(int integer){
		*this = *this / integer;
		return *this;
	}

	bool operator==(const Fraction &obj){
		return (numerator == obj.numerator && denominator == obj.denominator);
	}

	bool operator!=(const Fraction &obj){
		return (numerator != obj.numerator || denominator != obj.denominator);
	}

	bool operator<(const Fraction &obj){
		Fraction temp = *this - obj;
		return (temp.numerator < 0);
	}

	bool operator>(const Fraction &obj){
		Fraction temp = *this - obj;
		return (temp.numerator > 0);
	}

	bool operator<=(const Fraction &obj){
		Fraction temp = *this - obj;
		return (temp.numerator <= 0);
	}

	bool operator>=(const Fraction &obj){
		Fraction temp = *this - obj;
		return (temp.numerator >= 0);
	}

};