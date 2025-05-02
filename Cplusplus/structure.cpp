// c++ program to access structure program using pointer
#include <iostream>
#include <string>
using namespace std;

struct person{
    int age;
    string name;
};
int main(){
    person p1,*ptr;
    ptr = &p1;

    cout << "Enter your name: ";
    cin >> ptr->name;

    cout << "Enter your age: ";
    cin >> ptr->age;

    cout << "Employee details.\n";
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;
}