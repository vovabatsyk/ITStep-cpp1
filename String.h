#pragma once
#include<iostream>
using namespace std;


class String {

private:
    char* str;
    int size = 0;
public:
   
    String(); // конструктор за замовчуванням, що дозволяє створити рядок довжиною 80 символів
    String(int length); // конструктор, що дозволяє створювати рядок довільного розміру
    String(const char* str); // конструктор, який створює рядок і ініціалізує її рядком, отриманого від користувача
    String(const String& other); //конструктор копіювання
    ~String(); // деструктор для очищення пам'яті
    String& operator =(const String& other); // перегрузка оператора "=", для присвоєння значень обєкту класа 
    String operator +(const String& other); // перегрузка оператора "+", для склеювання рядків 

    // методи для введення рядків з клавіатури і виведення рядків на екран
    void input_string();
    void print_string()const;
};

