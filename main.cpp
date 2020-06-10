#include "String.h"
#include "Person.h"

void print_line();
int main() {
    cout << "\t***Class Person***\n" << endl;
    Person p("Volodymyr", 32, 0, 631111111);
    
    p.Print();
    print_line();
    p.change_person();
    p.Print();
    print_line();

    cout << "\t***Class String***\n" << endl;
    String str1;
    cout << "Enter line 1: ";
    str1.input_string();
    str1.print_string();

    String str2;
    cout << "Enter line 2: ";
    str2.input_string();
    str2.print_string();

    print_line();
    String str3 = str1 + " " + str2;
    str3.print_string();
    print_line();

    system("pause");
    return 0;
}

void print_line() {
    cout << endl;
    for (int i = 0; i < 30; i++)
        cout << "=";
    cout << endl;
}