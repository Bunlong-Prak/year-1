#include <iostream>
using namespace std;
class Employee{
    private:
    string Name;
    string Company;
    int Age;

    public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name ;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age=age;
    }
    int getAge(){
        return Age;
    }
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
    employee1.setAge(19);
    cout << employee1.getName()<<" is " <<employee1.getAge() << " year old" << endl;
}