#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	int age;
	bool sex;
	long int phone;

public:
	Person();
	Person(string name, int age, char sex, long int phoneNumber);

	void change_name();
	void change_age();
	void change_sex();
	void change_phone_number(); 
	void change_person(); // на вибір змінює поля обєкта
	void Print() const;
};



