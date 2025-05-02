//This cpp program is to handle data a lot of employee
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Employee{
    int age;
    string name;
    float salary;
    
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main(){
    int n;
    cout << "Enter the number of employee: ";
    cin >> n;

    vector<Employee> employees;
    
    for(int i = 0 ; i < n ; i++){
        cout << "Enter details for employee-" << i+1 << endl;
        Employee emp;
        cout << "Enter name: ";
        cin >> emp.name ;

        cout << "Enter the age: ";
        cin >> emp.age;

        cout << "Enter the salary: ";
        cin >> emp.salary;
        
        employees.push_back(emp);
        cout << endl;
        
    }

    for(int i = 0 ; i < n ; i++){

        cout << "Details of employee-"<< i+1 << endl;
        employees[i].display();

    }
}