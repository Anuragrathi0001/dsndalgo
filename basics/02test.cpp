#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "enter your age\n";
    cin >> age;
    cout << "your age is " << age <<endl;
    cout << (age == 5)&&(age<2);
    return 0;
}