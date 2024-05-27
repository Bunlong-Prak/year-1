
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#define MAXX 3
struct student
{
    string name;
    int stuid;
    char courses[4][20] = {"CS126", "ECON201", "KHM102", "MATH241"};
    double grade[4];
    double gen_average[MAXX];
} students[MAXX];
int main()
{
    int course_index;
    double sum;
    cout << "Please enter student's name and their grade for the following courses " << endl;
    for (int i = 0; i < MAXX; i++)
    {
        cout << "Student's name : ";
        getline(cin, students[i].name);
        course_index = sum = 0;
        while (course_index < 4)
        {
            cout << "\t" << students[i].courses[course_index] << ": ";
            cin >> students[i].grade[course_index];
            sum = sum + students[i].grade[course_index];
            course_index++;
        }
        students[i].gen_average[i] = sum / 4;
        cin.ignore();
    }
    for (int i = 0; i < MAXX; i++)
    {
        cout << "the general average of " << students[i].name << " is : " << students[i].gen_average[i] << endl;
    }
    return 0;
}
/*
#include <iostream>
using namespace std;
#define MAXX 3

struct student
{
    string name;
    int studID;
    char course[4][20] = {"CS126", "Econ201", "Khm102", "MAth241"};
    double grade[4];
    double gen_average[MAXX];

} student[MAXX];
int main(){
    cout << "Enter your name: "<<endl;
    cout <<"\tName: ";


}
struct birthdate
{
    string name;
    char months[12][10] =
        {
            "Jan", "Feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "Nov", "DEc";
} int month, day, year;
}
my_birthdate;
int main()
{
    cout << "Enter name " << endl;
    cout << "\tName ";
    getline(cin, my_birthdate.name);
    cout << "\tNumber equivanlent of birth month (1-12): ";
    cin >> my_birthdate.months;
    cout << "\tBirth Day ";
    cin >> my_birthdate.day;
    cout << "\tBirth year ";
    cin >> my_birthdate.year;
    cout << my_birthdate.name << "was born on " << endl;
    my_birthdate.months[my_birthdate.month - 1] << " " << my_birthdate.day << " " << my_birthdate.year;
    return 0;
}
struct student
{
    string name;
    int studentID;
    char major[30];

} mystudent;
int main()
{
    cout << "Enter data: " << endl;
    cout << "\tName";
    getline(cin, mystudent.name);
    cout << "\tStudent ID: ";
    cin >> mystudent.studentID;
    cout << "\tMajor: ";
    cin >> mystudent.major;
    cout << "you have entered " << endl;
    cout << mystudent.name << "\t" << mystudent.studentID << "\t" << mystudent.major;
    return 0;
}*/