#include "String.h"

String::String() {
	str = nullptr;
    size = 80;
    str = new char[size + 1];
}

String::String(int length) {
	str = nullptr;
    size = length;
    str = new char[size + 1];
}

String::String(const char* str) {
    int length = strlen(str) + 1;
    this->str = new char[length];
    strcpy_s(this->str, length, str);
}

String::~String()
{
    delete[] str;
}

void String::input_string() {
    cin.getline(str, size);
}

void String::print_string()const {
    cout << str << endl;
}

String::String(const String& other)
{
	int length = strlen(other.str);
	this->str = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->str[i] = other.str[i];
	}
	this->str[length] = '\0';
}

String& String::operator=(const String& other)
{
	if (this->str != nullptr)
	{
		delete[] str;
	}
	int length = strlen(other.str);
	this->str = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->str[i] = other.str[i];
	}
	this->str[length] = '\0';

	return *this;
}

String String::operator+(const String& other)
{
	String new_str;
	int this_length = strlen(this->str);
	int other_length = strlen(other.str);
	new_str.str = new char[this_length + other_length + 1];
	int i = 0;
	for (; i < this_length; i++)
	{
		new_str.str[i] = this->str[i];
	}
	for (int j = 0; j < other_length; j++, i++)
	{
		new_str.str[i] = other.str[j];
	}
	new_str.str[this_length + other_length] = '\0';
	return new_str;
}
