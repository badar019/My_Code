#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Distance{
    int feet;
    int inches;
    Distance add_distance(Distance d1, Distance d2){
        Distance result;
        result.feet = d1.feet + d2.feet;
        result.inches = d1.inches + d2.inches;

        if(result.inches >= 12){
            result.feet += result.inches / 12;
            result.inches = result.inches % 12;
        }
        return result;
    }
};

int main(){
    Distance d1,d2,sum;

    cout << "Enter first distance: \n";
    cout << "Feet: ";
    cin >> d1.feet;
    cout << "Inches: ";
    cin >> d1.inches;

    cout << "Enter second distance: \n";
    cout << "Feet: ";
    cin >> d2.feet;
    cout << "Inches: ";
    cin >> d2.inches;

    sum = add_distance(d1,d2);

    cout << "\nTotat distance : " << sum.feet << " feet & " << sum.inches << " inches." << endl;
}