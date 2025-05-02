// c++ program to access structure program 
#include <iostream>
#include <string>
using namespace std;

struct employee{
    string name;
    int age;
    int salary;

    void display(){
        cout << "Employee details\n";
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
    }
};
int main(){
    employee person1;
    cout << "Enter the name: ";
    cin >> person1.name;

    cout << "Enter the age: ";
    cin >> person1.age;

    person1.display();
    
}