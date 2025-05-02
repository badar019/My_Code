#include <iostream>
#include <string>
#include <vector>
using namespace std;

class student{
public:
    int phy;
    int chem;
    int math;

    void display(){
        float total_mark = phy + math + chem;
        float percentage = (total_mark / 300) *100 ;
        cout << "Marks in physics: " << phy <<endl;
        cout << "Marks in math: " << math<<endl;
        cout << "Marks in chemistry: " << chem <<endl;
        cout << "He has got " << percentage << "% marks." << endl;
    }
};

int main(){

    vector<student> stu;
    int n = 3;
    for(int i = 0 ; i < n ; i++){

        student s1;
        cout << "Enter the marks of roll-" << i+1 << endl;

        cout << "Marks in physics: ";
        cin >> s1.phy ;

        cout << "Marks in chemistry: ";
        cin >> s1.chem ;

        cout << "Marks in math: ";
        cin >> s1.math;

        stu.push_back(s1);

    }

    for(int i = 0 ; i < n ; i++ ){
        cout << "Marks of student-" << i+1 << endl;
        stu[i].display();
    }
}