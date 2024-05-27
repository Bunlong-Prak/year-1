#include <iostream>
#include <string>
using namespace std;
void introduceMe(string name, string city, int age = 0)
{
    cout << "My name is " << name << endl;
    cout << "My city is " << city << endl;
    if (age != 0)
        cout << " I am " << age << endl;
}
int main()
{
    int age;
    string name;
    string city;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your city: ";
    cin >> city;
    cout << "Enter your age: ";
    cin >> age;
    introduceMe(name, city, age);
    // introduceMe("Nate river", "New york", 18);
    // introduceMe("L lawliet", "tokyo", 22);
    // introduceMe("light yagami", "tokyo");
}