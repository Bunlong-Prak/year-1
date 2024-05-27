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
    //contructor 
    Employee(string name,string company, int age ){
            Name = name;
            Company = company;
            Age = age;
    }
};

int main()
{

    Employee employee1 = Employee( "long","Paragon",18);
    employee1.IntroducdeYourself();
    Employee employee2 = Employee( "Naruto","Konoha Academy",35);
    employee2.IntroducdeYourself();

}