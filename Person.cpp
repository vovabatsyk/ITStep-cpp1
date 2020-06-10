#include "Person.h"

Person::Person() {
	this->name = "";
	this->age = 0;
	this->sex = true;
	this->phone = 0;
}

Person::Person(string name, int age, char sex, long int phoneNumber) :
	name(name)
	, age(age)
	, sex(sex)
	, phone(phoneNumber) {}

void Person::change_name()
{
	cout << "Your name - ";
	getline(cin, name);
}

void Person::change_age()
{
	cout << "Your age - ";
	cin >> age;
	cin.get();
}

void Person::change_sex()
{
	cout << "Your sex (0 - male, 1 - female) - ";
	cin >> sex;
	cin.get();
}

void Person::change_phone_number()
{
	cout << "Your phone number - ";
	cin >> phone;
	cin.get();
}

void Person::Print() const
{
	cout << "name:\t" << name << '\n'
		<< "age:\t" << age << '\n'
		<< "sex:\t" << (sex ? "female" : "male") << '\n'
		<< "phone:\t" << phone << '\n';
}

void Person::change_person() {
	cout << "0 - nothing\n1 - name\n2 - age\n3 - sex\n4 - phone number\nChoose what to change - ";
	char count;
	cin >> count;
	cin.get();
	switch (count)
	{
	case 49:
		this->change_name();
		break;
	case 50:
		this->change_age();
		break;
	case 51:
		this->change_sex();
		break;
	case 52:
		this->change_phone_number();
		break;
	case 48:
		break;
	default:
		cout << "\t***Wrong choice***" << endl;
		break;
	}
}

