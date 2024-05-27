#include <iostream>
using namespace std;
class Employee{
    public:
    string Name;
    string Company;
    int Age;
    void IntroducdeYourself(){
        cout << "Name - " << Name <<endl;
        cout << "Company - " << Company <<endl;
        cout << "Age - " << Age <<endl;
    }
};

int main()
{

    Employee employee1;
    employee1.Name = "long";
    employee1.Company = "Paragon";
    employee1.Age = 18;
    employee1.IntroducdeYourself();
    Employee employee2;
    employee2.Name = "Naruto";
    employee2.Company = "Konoha Academy";
    employee2.Age = 35;
    employee2.IntroducdeYourself();
}


    
