#pragma once
#include<iostream>
using namespace std;


class String {

private:
    char* str;
    int size = 0;
public:
   
    String(); // ����������� �� �������������, �� �������� �������� ����� �������� 80 �������
    String(int length); // �����������, �� �������� ���������� ����� ��������� ������
    String(const char* str); // �����������, ���� ������� ����� � �������� �� ������, ���������� �� �����������
    String(const String& other); //����������� ���������
    ~String(); // ���������� ��� �������� ���'��
    String& operator =(const String& other); // ���������� ��������� "=", ��� ��������� ������� ����� ����� 
    String operator +(const String& other); // ���������� ��������� "+", ��� ���������� ����� 

    // ������ ��� �������� ����� � ��������� � ��������� ����� �� �����
    void input_string();
    void print_string()const;
};

